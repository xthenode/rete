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
#ifndef XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_HPP
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_HPP

#include "xos/app/console/network/sockets/server/main_opt.hpp"

namespace xos {
namespace app {
namespace console {
namespace network {
namespace sockets {
namespace server {

/// class maint
template 
<class TExtends = server::main_opt, 
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
    maint(): accept_response_("HTTP/1.0 200 OK\r\n\r\nOK\r\n") {
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

    /// ...recv_request
    virtual int recv_request(xos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        int err = 0;
        string_t& accept_request = this->accept_request();
        err = this->all_recv_request(accept_request, cn, argc, argv, env);
        return err;
    }
    
    /// ...send_response
    virtual int send_response(xos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        int err = 0;
        string_t& accept_response = this->accept_response();
        err = this->all_send_response(cn, accept_response, argc, argv, env);
        return err;
    }

    /// accept request / response
    virtual string_t& accept_request() const {
        return (string_t&)accept_request_;
    }
    virtual string_t& accept_response() const {
        return (string_t&)accept_response_;
    }
    
protected:
    string_t accept_response_, accept_request_;
}; /// class maint
typedef maint<> main;

} /// namespace server
} /// namespace sockets
} /// namespace network
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_HPP
