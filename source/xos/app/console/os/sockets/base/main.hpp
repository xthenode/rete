///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2021 $organization$
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
///   Date: 3/4/2021
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_OS_SOCKETS_BASE_MAIN_HPP
#define XOS_APP_CONSOLE_OS_SOCKETS_BASE_MAIN_HPP

#include "xos/app/console/os/sockets/base/main_opt.hpp"

namespace xos {
namespace app {
namespace console {
namespace os {
namespace sockets {
namespace base {

/// class maint
template 
<class TExtends = base::main_opt, 
 class TImplements = typename TExtends::implements>

class exported maint: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef maint derives;

    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;
    typedef typename extends::string_t string_t;
    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };

    /// constructor / destructor
    maint() {
    }
    virtual ~maint() {
    }
private:
    maint(const maint& copy) {
        throw exception(exception_unexpected);
    }

protected:
    typedef typename extends::in_reader_t in_reader_t;
    typedef typename extends::out_writer_t out_writer_t;
    typedef typename extends::err_writer_t err_writer_t;

    /// ...iface
    virtual xos::network::sockets::interface& accept_iface() const {
        return (xos::network::sockets::interface&)os_accept_iface_;
    }
    virtual xos::network::sockets::interface& connect_iface() const {
        return (xos::network::sockets::interface&)os_connect_iface_;
    }
    virtual xos::network::sockets::interface& relay_iface() const {
        return (xos::network::sockets::interface&)os_relay_iface_;
    }

protected:
    xos::network::sockets::os::interface os_accept_iface_, os_connect_iface_, os_relay_iface_;
}; /// class maint
typedef maint<> main;

} /// namespace base
} /// namespace sockets
} /// namespace os
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_OS_SOCKETS_BASE_MAIN_HPP
