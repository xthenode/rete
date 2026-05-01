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
///   File: main_opt.hpp
///
/// Author: $author$
///   Date: 11/4/2020
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_MICROSOFT_WINDOWS_SOCKETS_BASE_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_MICROSOFT_WINDOWS_SOCKETS_BASE_MAIN_OPT_HPP

#include "xos/app/console/network/sockets/base/main.hpp"

namespace xos {
namespace app {
namespace console {
namespace microsoft {
namespace windows {
namespace sockets {
namespace base {

/// class main_optt
template <class TExtends = console::network::sockets::base::maint<>, class TImplements = typename TExtends::implements>
class exported main_optt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef main_optt derives; 
    
    typedef typename extends::in_reader_t in_reader_t;
    typedef typename extends::err_writer_t err_writer_t;
    typedef typename extends::out_writer_t out_writer_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;
    typedef typename extends::string_t string_t;
    typedef typename extends::char_t char_t;

    /// constructors / destructor
    main_optt() {
    }
    virtual ~main_optt() {
    }
private:
    main_optt(const main_optt& copy) {
    }

}; /// class main_optt
typedef main_optt<> main_opt;

} /// namespace base
} /// namespace sockets
} /// namespace windows
} /// namespace microsoft
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// XOS_APP_CONSOLE_MICROSOFT_WINDOWS_SOCKETS_BASE_MAIN_OPT_HPP
