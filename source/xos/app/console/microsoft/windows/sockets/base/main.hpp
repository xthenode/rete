///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2020 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: main.hpp
///
/// Author: $author$
///   Date: 11/4/2020
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_MICROSOFT_WINDOWS_SOCKETS_BASE_MAIN_HPP
#define XOS_APP_CONSOLE_MICROSOFT_WINDOWS_SOCKETS_BASE_MAIN_HPP

#include "xos/app/console/microsoft/windows/sockets/base/main_opt.hpp"

#if defined(USE_WINSOCK2)
#include <winsock2.h>
#else /// defined(USE_WINSOCK2)
#include <winsock.h>
#endif /// defined(USE_WINSOCK2)

namespace xos {
namespace app {
namespace console {
namespace microsoft {
namespace windows {
namespace sockets {
namespace base {

/// class maint
template <class TExtends = main_optt<>, class TImplements = typename TExtends::implements>
class exported maint: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef maint derives; 
    
    typedef typename extends::in_reader_t in_reader_t;
    typedef typename extends::err_writer_t err_writer_t;
    typedef typename extends::out_writer_t out_writer_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;
    typedef typename extends::string_t string_t;
    typedef typename extends::char_t char_t;

    /// constructors / destructor
    maint() {
    }
    virtual ~maint() {
    }
private:
    maint(const maint& copy) {
    }

protected:
    /// ...sockets_run
    virtual int before_sockets_run(int argc, char_t** argv, char_t** env) {
        WORD wVersionRequired = 0;
        WSADATA wsaData;
        int err = 0;

        LOGGER_LOG_DEBUG("WSAStartup(wVersionRequired = " << unsigned_to_string(wVersionRequired).chars() << ", &wsaData)...");
        if (0 == (WSAStartup(wVersionRequired, &wsaData))) {
            LOGGER_LOG_DEBUG("...WSAStartup(wVersionRequired = " << unsigned_to_string(wVersionRequired).chars() << ", &wsaData)");
        } else {
            int wsaLastError = WSAGetLastError();
            LOGGER_LOG_ERROR("...failed wsaLastError = " << int_to_string(wsaLastError).chars() << " on WSAStartup(wVersionRequired = " << unsigned_to_string(wVersionRequired).chars() << ", &wsaData)");
            err = 1;
        }
        return err;
    }
    virtual int after_sockets_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        LOGGER_LOG_DEBUG("WSACleanup()...");
        if (0 == (WSACleanup())) {
            LOGGER_LOG_DEBUG("...WSACleanup()");
        } else {
            int wsaLastError = WSAGetLastError();            
            LOGGER_LOG_ERROR("...failed wsaLastError = " << int_to_string(wsaLastError).chars() << " on WSACleanup()");
        }
        return err;
    }

}; /// class maint
typedef maint<> main;

} /// namespace base
} /// namespace sockets
} /// namespace windows
} /// namespace microsoft
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// XOS_APP_CONSOLE_MICROSOFT_WINDOWS_SOCKETS_BASE_MAIN_HPP
