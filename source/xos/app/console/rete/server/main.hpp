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
///   Date: 9/9/2020
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_RETE_SERVER_MAIN_HPP
#define XOS_APP_CONSOLE_RETE_SERVER_MAIN_HPP

#include "xos/app/console/rete/server/main_opt.hpp"

namespace xos {
namespace app {
namespace console {
namespace rete {
namespace server {

/// class maint
template <class TExtends = rete::server::main_opt, class TImplements = typename TExtends::implements>
class exported maint: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef maint derives; 
    
    typedef typename extends::in_reader_t in_reader_t;
    typedef typename extends::out_writer_t out_writer_t;
    typedef typename extends::err_writer_t err_writer_t;
    typedef typename extends::string_t string_t;
    typedef typename extends::char_t char_t;

    /// constructors / destructor
    maint(): accept_response_("HTTP/1.0 200 OK\r\n\r\nOK\r\n") {
    }
    virtual ~maint() {
    }
private:
    maint(const maint& copy) {
    }

protected:
    /// ...recv_request
    virtual int recv_request(xos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        int err = 0;
        char_t c = 0;
        string_t& accept_request = this->accept_request();

        if (!(err = this->recv_crlf2(accept_request, c, cn, argc, argv, env))) {
            size_t length = 0;
            const char_t* chars = 0;
            if ((chars = accept_request.has_chars(length))) {
                this->out(chars, length);
            }
        }
        return err;
    }
    
    /// ...send_response
    virtual int send_response(xos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        int err = 0;
        size_t length = 0;
        const char_t* chars = 0;
        string_t& accept_response = this->accept_response();
        
        if ((chars = accept_response.has_chars(length))) {
            cn.send(chars, length, 0);
        }
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
} /// namespace rete
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// XOS_APP_CONSOLE_RETE_SERVER_MAIN_HPP
