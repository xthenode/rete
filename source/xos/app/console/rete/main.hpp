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
///   Date: 3/22/2020
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_RETE_MAIN_HPP
#define XOS_APP_CONSOLE_RETE_MAIN_HPP

#include "xos/app/console/rete/main_opt.hpp"
#include "xos/network/sockets/ip/v4/endpoint.hpp"
#include "xos/network/sockets/ip/v4/tcp/transport.hpp"
#include "xos/network/sockets/ip/v4/udp/transport.hpp"
#include "xos/network/sockets/ip/v6/endpoint.hpp"
#include "xos/network/sockets/ip/v6/tcp/transport.hpp"
#include "xos/network/sockets/ip/v6/udp/transport.hpp"
#include "xos/network/sockets/os/interface.hpp"

namespace xos {
namespace app {
namespace console {
namespace rete {

/// class maint
template <class TExtends = main_opt, class TImplements = typename TExtends::implements>
class exported maint: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef maint derives;

    typedef typename extends::string_t string_t;
    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };

    /// constructor / destructor
    maint()
    : request_("GET / HTTP/1.0\r\n\r\n"), response_("HTTP/1.0 200 Ok\r\n\r\nOk\r\n"),
      accept_ep_(0), accept_host_("localhost"), accept_port_(8080), 
      connect_host_("localhost"), connect_port_(80) {
    }
    virtual ~maint() {
    }
private:
    maint(const maint& copy): extends(copy) {
    }

protected:
    /// run
    virtual int run(int argc, char_t** argv, char_t**env) {
        const network::sockets::sockstring_t& host = this->accept_host();
        const network::sockets::sockport_t& port = this->accept_port();
        network::sockets::endpoint& ep = this->accept_ep();
        network::sockets::transport& tp = this->accept_tp();
        network::sockets::interface &ac = this->accept_iface(), 
                                    &cn = this->connect_iface();
        network::sockets::sockaddr_t& ad = this->connect_addr();
        network::sockets::socklen_t& al = this->connect_addrlen();
        int err = 0;

        if ((ep.attach(host, port))) {

            if ((ac.open(tp))) {
                
                if ((ac.listen(ep))) {
                    
                    if ((ac.accept(cn, &ad, al))) {
                        
                        accept(cn, argc, argv, env);
                        cn.close();
                    }
                }
                ac.close();
            }
            ep.detach();
        }
        return err;
    }
    
    /// accept
    virtual int accept(network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        network::sockets::sockstring_t &r = this->request(), &s = this->response();
        network::sockets::sockstring_t::char_t c = 0;
        unsigned cr = 0, lf = 0;
        ssize_t amount = 0;
        int err = 0;
        
        while (0 <= (amount = cn.recv(&c, 1, 0))) {
            if (0 < (amount)) {
                if (c == '\r') {
                    ++cr;
                } else {
                    if (c == '\n') {
                        if (cr) {
                            ++lf;
                        }
                    } else {
                        cr = lf = 0;
                    }
                }
                this->out(&c, 1);
                if (1 < lf) {
                    break;
                }
            }
        }
        cn.send(s.chars(), s.length(), 0);
        return err;
    }

    /// ...iface
    virtual network::sockets::interface& accept_iface() const {
        return (network::sockets::interface&)accept_iface_;
    }
    virtual network::sockets::interface& connect_iface() const {
        return (network::sockets::interface&)connect_iface_;
    }

    /// ...ep
    network::sockets::endpoint& (derives::*accept_ep_)() const;
    virtual network::sockets::endpoint& accept_ep() const {
        if ((this->accept_ep_)) {
            return (this->*accept_ep_)();
        }
        return default_accept_ep();
    }
    virtual network::sockets::endpoint& default_accept_ep() const {
        return accept_ip_v4_ep();
    }
    virtual network::sockets::endpoint& accept_ip_v4_ep() const {
        return (network::sockets::endpoint&)ip_v4_ep_;
    }
    virtual network::sockets::endpoint& accept_ip_v6_ep() const {
        return (network::sockets::endpoint&)ip_v6_ep_;
    }

    /// ...tp
    network::sockets::transport& (derives::*accept_tp_)() const;
    virtual network::sockets::transport& accept_tp() const {
        if ((this->accept_tp_)) {
            return (this->*accept_tp_)();
        }
        return default_accept_tp();
    }
    virtual network::sockets::transport& default_accept_tp() const {
        return accept_ip_v4_tcp_tp();
    }
    virtual network::sockets::transport& accept_ip_v4_tcp_tp() const {
        return (network::sockets::transport&)ip_v4_tcp_tp_;
    }
    virtual network::sockets::transport& accept_ip_v6_tcp_tp() const {
        return (network::sockets::transport&)ip_v6_tcp_tp_;
    }

    /// ...host / ...port
    virtual const network::sockets::sockstring_t& accept_host() const {
        return accept_host_;
    }
    virtual const network::sockets::sockport_t& accept_port() const {
        return accept_port_;
    }
    virtual const network::sockets::sockstring_t& connect_host() const {
        return connect_host_;
    }
    virtual const network::sockets::sockport_t& connect_port() const {
        return connect_port_;
    }
    
    virtual network::sockets::sockaddr_t& connect_addr() const {
        return (network::sockets::sockaddr_t&)connect_addr_;
    }
    virtual network::sockets::socklen_t& connect_addrlen() const {
        return (network::sockets::socklen_t&)connect_addrlen_;
    }

    virtual network::sockets::sockstring_t& request() const {
        return (network::sockets::sockstring_t&)request_;
    }
    virtual network::sockets::sockstring_t& response() const {
        return (network::sockets::sockstring_t&)response_;
    }

protected:
    network::sockets::sockstring_t request_, response_, accept_host_, connect_host_;
    network::sockets::sockport_t accept_port_, connect_port_;
    network::sockets::sockaddr_t connect_addr_;
    network::sockets::socklen_t connect_addrlen_;

    network::sockets::ip::v4::endpoint ip_v4_ep_;
    network::sockets::ip::v4::tcp::transport ip_v4_tcp_tp_;
    network::sockets::ip::v4::udp::transport ip_v4_udp_tp_;

    network::sockets::ip::v6::endpoint ip_v6_ep_;
    network::sockets::ip::v6::tcp::transport ip_v6_tcp_tp_;
    network::sockets::ip::v6::udp::transport ip_v6_udp_tp_;
    
    network::sockets::os::interface accept_iface_, connect_iface_;
}; /// class maint
typedef maint<> main;

} /// namespace rete
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_RETE_MAIN_HPP 
