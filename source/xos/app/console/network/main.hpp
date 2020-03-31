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
///   Date: 3/25/2020
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_NETWORK_MAIN_HPP
#define XOS_APP_CONSOLE_NETWORK_MAIN_HPP

#include "xos/app/console/network/main_opt.hpp"
#include "xos/network/sockets/ip/v4/endpoint.hpp"
#include "xos/network/sockets/ip/v4/tcp/transport.hpp"
#include "xos/network/sockets/ip/v4/udp/transport.hpp"
#include "xos/network/sockets/ip/v6/endpoint.hpp"
#include "xos/network/sockets/ip/v6/tcp/transport.hpp"
#include "xos/network/sockets/ip/v6/udp/transport.hpp"
#include "xos/network/sockets/os/interface.hpp"
#include "xos/network/sockets/reader.hpp"
#include "xos/network/sockets/writer.hpp"

namespace xos {
namespace app {
namespace console {
namespace network {

/// class maint
template 
<class TExtends = main_opt, class TImplements = typename TExtends::implements>
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
    : accept_ep_(0), accept_host_("localhost"), accept_port_(8080), 
      connect_ep_(0), connect_host_("localhost"), connect_port_(80) {
    }
    virtual ~maint() {
    }
private:
    maint(const maint& copy): extends(copy) {
    }

protected:
    /// ...run
    virtual int accept_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = this->accept(argc, argv, env);
        return err;
    }
    virtual int connect_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = this->connect(argc, argv, env);
        return err;
    }

    /// ...accept / ...connect
    virtual int accept(int argc, char_t** argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int connect(int argc, char_t** argv, char_t**env) {
        int err = 0;
        return err;
    }

    /// ...accept / ...connect
    virtual int accept(xos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        int err = 0;
        if (!(err = recv_request(cn, argc, argv, env))) {
            err = send_response(cn, argc, argv, env);
        }
        return err;
    }
    virtual int connect(xos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        int err = 0;
        if (!(err = send_request(cn, argc, argv, env))) {
            err = recv_response(cn, argc, argv, env);
        }
        return err;
    }

    /// send... / recv...
    virtual int send_request(xos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int send_response(xos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int recv_request(xos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int recv_response(xos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        int err = 0;
        return err;
    }

    /// ...iface
    virtual xos::network::sockets::interface& accept_iface() const {
        return (xos::network::sockets::interface&)accept_iface_;
    }
    virtual xos::network::sockets::interface& connect_iface() const {
        return (xos::network::sockets::interface&)connect_iface_;
    }

    /// ...ep
    xos::network::sockets::endpoint& (derives::*accept_ep_)() const;
    virtual xos::network::sockets::endpoint& accept_ep() const {
        if ((this->accept_ep_)) {
            return (this->*accept_ep_)();
        }
        return default_accept_ep();
    }
    virtual xos::network::sockets::endpoint& default_accept_ep() const {
        return accept_ip_v4_ep();
    }
    virtual xos::network::sockets::endpoint& accept_ip_v4_ep() const {
        return (xos::network::sockets::endpoint&)ip_v4_ep_;
    }
    virtual xos::network::sockets::endpoint& accept_ip_v6_ep() const {
        return (xos::network::sockets::endpoint&)ip_v6_ep_;
    }
    xos::network::sockets::endpoint& (derives::*connect_ep_)() const;
    virtual xos::network::sockets::endpoint& connect_ep() const {
        if ((this->connect_ep_)) {
            return (this->*connect_ep_)();
        }
        return default_connect_ep();
    }
    virtual xos::network::sockets::endpoint& default_connect_ep() const {
        return connect_ip_v4_ep();
    }
    virtual xos::network::sockets::endpoint& connect_ip_v4_ep() const {
        return (xos::network::sockets::endpoint&)ip_v4_ep_;
    }
    virtual xos::network::sockets::endpoint& connect_ip_v6_ep() const {
        return (xos::network::sockets::endpoint&)ip_v6_ep_;
    }

    /// ...tp
    xos::network::sockets::transport& (derives::*accept_tp_)() const;
    virtual xos::network::sockets::transport& accept_tp() const {
        if ((this->accept_tp_)) {
            return (this->*accept_tp_)();
        }
        return default_accept_tp();
    }
    virtual xos::network::sockets::transport& default_accept_tp() const {
        return accept_ip_v4_tcp_tp();
    }
    virtual xos::network::sockets::transport& accept_ip_v4_tcp_tp() const {
        return (xos::network::sockets::transport&)ip_v4_tcp_tp_;
    }
    virtual xos::network::sockets::transport& accept_ip_v6_tcp_tp() const {
        return (xos::network::sockets::transport&)ip_v6_tcp_tp_;
    }
    xos::network::sockets::transport& (derives::*connect_tp_)() const;
    virtual xos::network::sockets::transport& connect_tp() const {
        if ((this->connect_tp_)) {
            return (this->*connect_tp_)();
        }
        return default_connect_tp();
    }
    virtual xos::network::sockets::transport& default_connect_tp() const {
        return connect_ip_v4_tcp_tp();
    }
    virtual xos::network::sockets::transport& connect_ip_v4_tcp_tp() const {
        return (xos::network::sockets::transport&)ip_v4_tcp_tp_;
    }
    virtual xos::network::sockets::transport& connect_ip_v6_tcp_tp() const {
        return (xos::network::sockets::transport&)ip_v6_tcp_tp_;
    }

    /// ...host / ...port
    virtual const xos::network::sockets::sockstring_t& accept_host() const {
        return accept_host_;
    }
    virtual const xos::network::sockets::sockport_t& accept_port() const {
        return accept_port_;
    }
    virtual const xos::network::sockets::sockstring_t& connect_host() const {
        return connect_host_;
    }
    virtual const xos::network::sockets::sockport_t& connect_port() const {
        return connect_port_;
    }
    
    /// ...addr /  ...addrlen
    virtual xos::network::sockets::sockaddr_t& connect_addr() const {
        return (xos::network::sockets::sockaddr_t&)connect_addr_;
    }
    virtual xos::network::sockets::socklen_t& connect_addrlen() const {
        return (xos::network::sockets::socklen_t&)connect_addrlen_;
    }

protected:
    xos::network::sockets::sockstring_t accept_host_, connect_host_;
    xos::network::sockets::sockport_t accept_port_, connect_port_;
    xos::network::sockets::sockaddr_t connect_addr_;
    xos::network::sockets::socklen_t connect_addrlen_;

    xos::network::sockets::ip::v4::endpoint ip_v4_ep_;
    xos::network::sockets::ip::v4::tcp::transport ip_v4_tcp_tp_;
    xos::network::sockets::ip::v4::udp::transport ip_v4_udp_tp_;

    xos::network::sockets::ip::v6::endpoint ip_v6_ep_;
    xos::network::sockets::ip::v6::tcp::transport ip_v6_tcp_tp_;
    xos::network::sockets::ip::v6::udp::transport ip_v6_udp_tp_;
    
    xos::network::sockets::os::interface accept_iface_, connect_iface_;
}; /// class maint
typedef maint<> main;

} /// namespace network
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_NETWORK_MAIN_HPP 
