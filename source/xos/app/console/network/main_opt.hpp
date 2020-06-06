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
///   Date: 3/25/2020
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_NETWORK_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_NETWORK_MAIN_OPT_HPP

#include "xos/app/console/main.hpp"

#define XOS_NETWORK_MAIN_ACCEPT_OPT "accept"
#define XOS_NETWORK_MAIN_ACCEPT_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_NETWORK_MAIN_ACCEPT_OPTARG_RESULT 0
#define XOS_NETWORK_MAIN_ACCEPT_OPTARG ""
#define XOS_NETWORK_MAIN_ACCEPT_OPTUSE "Accept"
#define XOS_NETWORK_MAIN_ACCEPT_OPTVAL_S "a"
#define XOS_NETWORK_MAIN_ACCEPT_OPTVAL_C 'a'
#define XOS_NETWORK_MAIN_ACCEPT_OPTION \
   {XOS_NETWORK_MAIN_ACCEPT_OPT, \
    XOS_NETWORK_MAIN_ACCEPT_OPTARG_REQUIRED, \
    XOS_NETWORK_MAIN_ACCEPT_OPTARG_RESULT, \
    XOS_NETWORK_MAIN_ACCEPT_OPTVAL_C}, \

#define XOS_NETWORK_MAIN_CONNECT_OPT "connect"
#define XOS_NETWORK_MAIN_CONNECT_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_NETWORK_MAIN_CONNECT_OPTARG_RESULT 0
#define XOS_NETWORK_MAIN_CONNECT_OPTARG ""
#define XOS_NETWORK_MAIN_CONNECT_OPTUSE "Connect"
#define XOS_NETWORK_MAIN_CONNECT_OPTVAL_S "c"
#define XOS_NETWORK_MAIN_CONNECT_OPTVAL_C 'c'
#define XOS_NETWORK_MAIN_CONNECT_OPTION \
   {XOS_NETWORK_MAIN_CONNECT_OPT, \
    XOS_NETWORK_MAIN_CONNECT_OPTARG_REQUIRED, \
    XOS_NETWORK_MAIN_CONNECT_OPTARG_RESULT, \
    XOS_NETWORK_MAIN_CONNECT_OPTVAL_C}, \

#define XOS_NETWORK_MAIN_INFO_OPT "info"
#define XOS_NETWORK_MAIN_INFO_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_NETWORK_MAIN_INFO_OPTARG_RESULT 0
#define XOS_NETWORK_MAIN_INFO_OPTARG ""
#define XOS_NETWORK_MAIN_INFO_OPTUSE "Info"
#define XOS_NETWORK_MAIN_INFO_OPTVAL_S "i"
#define XOS_NETWORK_MAIN_INFO_OPTVAL_C 'i'
#define XOS_NETWORK_MAIN_INFO_OPTION \
   {XOS_NETWORK_MAIN_INFO_OPT, \
    XOS_NETWORK_MAIN_INFO_OPTARG_REQUIRED, \
    XOS_NETWORK_MAIN_INFO_OPTARG_RESULT, \
    XOS_NETWORK_MAIN_INFO_OPTVAL_C}, \

#define XOS_NETWORK_MAIN_HOST_OPT "host"
#define XOS_NETWORK_MAIN_HOST_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_REQUIRED
#define XOS_NETWORK_MAIN_HOST_OPTARG_RESULT 0
#define XOS_NETWORK_MAIN_HOST_OPTARG ""
#define XOS_NETWORK_MAIN_HOST_OPTUSE "Hostname or address"
#define XOS_NETWORK_MAIN_HOST_OPTVAL_S "o:"
#define XOS_NETWORK_MAIN_HOST_OPTVAL_C 'o'
#define XOS_NETWORK_MAIN_HOST_OPTION \
   {XOS_NETWORK_MAIN_HOST_OPT, \
    XOS_NETWORK_MAIN_HOST_OPTARG_REQUIRED, \
    XOS_NETWORK_MAIN_HOST_OPTARG_RESULT, \
    XOS_NETWORK_MAIN_HOST_OPTVAL_C}, \

#define XOS_NETWORK_MAIN_PORT_OPT "port"
#define XOS_NETWORK_MAIN_PORT_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_REQUIRED
#define XOS_NETWORK_MAIN_PORT_OPTARG_RESULT 0
#define XOS_NETWORK_MAIN_PORT_OPTARG ""
#define XOS_NETWORK_MAIN_PORT_OPTUSE "Port number"
#define XOS_NETWORK_MAIN_PORT_OPTVAL_S "p:"
#define XOS_NETWORK_MAIN_PORT_OPTVAL_C 'p'
#define XOS_NETWORK_MAIN_PORT_OPTION \
   {XOS_NETWORK_MAIN_PORT_OPT, \
    XOS_NETWORK_MAIN_PORT_OPTARG_REQUIRED, \
    XOS_NETWORK_MAIN_PORT_OPTARG_RESULT, \
    XOS_NETWORK_MAIN_PORT_OPTVAL_C}, \

#define XOS_NETWORK_MAIN_OPTIONS_CHARS_EXTEND \
    XOS_NETWORK_MAIN_ACCEPT_OPTVAL_S \
    XOS_NETWORK_MAIN_CONNECT_OPTVAL_S \
    XOS_NETWORK_MAIN_INFO_OPTVAL_S \
    XOS_NETWORK_MAIN_HOST_OPTVAL_S \
    XOS_NETWORK_MAIN_PORT_OPTVAL_S

#define XOS_NETWORK_MAIN_OPTIONS_OPTIONS_EXTEND \
    XOS_NETWORK_MAIN_ACCEPT_OPTION \
    XOS_NETWORK_MAIN_CONNECT_OPTION \
    XOS_NETWORK_MAIN_INFO_OPTION \
    XOS_NETWORK_MAIN_HOST_OPTION \
    XOS_NETWORK_MAIN_PORT_OPTION

#define XOS_NETWORK_MAIN_OPTIONS_CHARS \
    XOS_NETWORK_MAIN_OPTIONS_CHARS_EXTEND \
    XOS_CONSOLE_MAIN_OPTIONS_CHARS

#define XOS_NETWORK_MAIN_OPTIONS_OPTIONS \
    XOS_NETWORK_MAIN_OPTIONS_OPTIONS_EXTEND \
    XOS_CONSOLE_MAIN_OPTIONS_OPTIONS

#define XOS_NETWORK_MAIN_ARUMENTS_CHARS 0
#define XOS_NETWORK_MAIN_ARUMENTS_ARGS 0

namespace xos {
namespace app {
namespace console {
namespace network {

/// class main_optt
template 
<class TExtends = console::main, class TImplements = typename TExtends::implements>
class exported main_optt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef main_optt derives;

    typedef typename extends::string_t string_t;
    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };

    /// constructor / destructor
    main_optt()
    : run_(0), 
      accept_port_(8080), connect_port_(80),
      accept_host_("*"), connect_host_("localhost") {
    }
    virtual ~main_optt() {
    }
private:
    main_optt(const main_optt& copy): extends(copy) {
    }

protected:
    /// ...run
    int (derives::*run_)(int argc, char_t** argv, char_t** env);
    virtual int run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if ((run_)) {
            err = (this->*run_)(argc, argv, env);
        } else {
            err = default_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = this->usage(argc, argv, env);
        return err;
    }
    virtual int accept_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = this->usage(argc, argv, env);
        return err;
    }
    virtual int connect_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = this->usage(argc, argv, env);
        return err;
    }
    virtual int info_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = this->usage(argc, argv, env);
        return err;
    }

    /// ...options...
    virtual int on_accept_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        run_ = &derives::accept_run;
        return err;
    }
    virtual const char_t* accept_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        optarg = XOS_NETWORK_MAIN_ACCEPT_OPTARG;
        chars = XOS_NETWORK_MAIN_ACCEPT_OPTUSE;
        return chars;
    }
    virtual int on_connect_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        run_ = &derives::connect_run;
        return err;
    }
    virtual const char_t* connect_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        optarg = XOS_NETWORK_MAIN_CONNECT_OPTARG;
        chars = XOS_NETWORK_MAIN_CONNECT_OPTUSE;
        return chars;
    }
    virtual int on_info_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        run_ = &derives::info_run;
        return err;
    }
    virtual const char_t* info_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        optarg = XOS_NETWORK_MAIN_INFO_OPTARG;
        chars = XOS_NETWORK_MAIN_INFO_OPTUSE;
        return chars;
    }
    virtual int on_host_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            this->set_accept_host(optarg);
            this->set_connect_host(optarg);
        }
        return err;
    }
    virtual const char_t* host_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        optarg = XOS_NETWORK_MAIN_HOST_OPTARG;
        chars = XOS_NETWORK_MAIN_HOST_OPTUSE;
        return chars;
    }
    virtual int on_port_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            string_t arg(optarg);
            unsigned port = arg.to_unsigned();
            if ((0 < port)) {
                this->set_accept_port(port);
                this->set_connect_port(port);
            }
        }
        return err;
    }
    virtual const char_t* port_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        optarg = XOS_NETWORK_MAIN_PORT_OPTARG;
        chars = XOS_NETWORK_MAIN_PORT_OPTUSE;
        return chars;
    }
    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {
        case XOS_NETWORK_MAIN_ACCEPT_OPTVAL_C:
            err = this->on_accept_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_NETWORK_MAIN_CONNECT_OPTVAL_C:
            err = this->on_connect_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_NETWORK_MAIN_INFO_OPTVAL_C:
            err = this->on_info_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_NETWORK_MAIN_HOST_OPTVAL_C:
            err = this->on_host_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_NETWORK_MAIN_PORT_OPTVAL_C:
            err = this->on_port_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        default:
            err = extends::on_option(optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    virtual const char_t* option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        switch(longopt->val) {
        case XOS_NETWORK_MAIN_ACCEPT_OPTVAL_C:
            chars = accept_option_usage(optarg, longopt);
            break;
        case XOS_NETWORK_MAIN_CONNECT_OPTVAL_C:
            chars = connect_option_usage(optarg, longopt);
            break;
        case XOS_NETWORK_MAIN_INFO_OPTVAL_C:
            chars = host_option_usage(optarg, longopt);
            break;
        case XOS_NETWORK_MAIN_HOST_OPTVAL_C:
            chars = host_option_usage(optarg, longopt);
            break;
        case XOS_NETWORK_MAIN_PORT_OPTVAL_C:
            chars = port_option_usage(optarg, longopt);
            break;
        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = XOS_NETWORK_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            XOS_NETWORK_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    /// ...arguments...
    virtual const char_t* arguments(const char_t**& args) {
        args = XOS_NETWORK_MAIN_ARUMENTS_ARGS;
        return XOS_NETWORK_MAIN_ARUMENTS_CHARS;
    }
    
    /// ...host... / ...port...
    virtual string_t& set_accept_host(const string_t& to) {
        const char_t* chars = to.has_chars();
        if ((chars)) accept_host_.assign(to);
        else accept_host_.clear();
        return accept_host();
    }
    virtual string_t& set_accept_host(const char_t* to) {
        if ((to)) accept_host_.assign(to);
        else accept_host_.clear();
        return accept_host();
    }
    virtual string_t& accept_host() const {
        return (string_t&)accept_host_;
    }
    virtual short& set_accept_port(short to) {
        accept_port_ = to;
        return accept_port();
    }
    virtual short& accept_port() const {
        return (short&)accept_port_;
    }
    virtual string_t& set_connect_host(const string_t& to) {
        const char_t* chars = to.has_chars();
        if ((chars)) connect_host_.assign(to);
        else connect_host_.clear();
        return connect_host();
    }
    virtual string_t& set_connect_host(const char_t* to) {
        if ((to)) connect_host_.assign(to);
        else connect_host_.clear();
        return connect_host();
    }
    virtual string_t& connect_host() const {
        return (string_t&)connect_host_;
    }
    virtual short& set_connect_port(short to) {
        connect_port_ = to;
        return connect_port();
    }
    virtual short& connect_port() const {
        return (short&)connect_port_;
    }

protected:
    typedef typename extends::out_writer_t out_writer_t;

protected:
    short accept_port_, connect_port_;
    string_t accept_host_, connect_host_;
}; /// class main_optt
typedef main_optt<> main_opt;

} /// namespace network
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_NETWORK_MAIN_OPT_HPP 
