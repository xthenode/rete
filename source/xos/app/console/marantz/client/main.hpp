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
///   Date: 11/16/2020
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_HPP
#define XOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_HPP

#include "xos/app/console/marantz/client/main_opt.hpp"

namespace xos {
namespace app {
namespace console {
namespace marantz {
namespace client {

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
    maint(): send_request_(0), recv_response_(0) {
    }
    virtual ~maint() {
    }
private:
    maint(const maint& copy) {
    }

protected:
    /// ...send_request
    int (derives::*send_request_)(xos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env);
    virtual int send_request(xos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        int err = 0;
        if ((this->send_request_)) {
            err = (this->*send_request_)(cn, argc, argv, env);
        }
        return err;
    }
    virtual int send_cr_request(xos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        string_t &connect_request = this->connect_request();
        int err = 0;
        err = this->send_cr(connect_request, cn, argc, argv, env);
        return err;
    }

    /// ...recv_response
    int (derives::*recv_response_)(xos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env);
    virtual int recv_response(xos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        int err = 0;
        if ((this->recv_response_)) {
            err = (this->*recv_response_)(cn, argc, argv, env);
        }
        return err;
    }
    virtual int recv_cr_response(xos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        string_t& connect_response = this->connect_response();
        int err = 0;
        char_t c = 0;
        if (!(err = this->recv_cr(connect_response, c, cn, argc, argv, env))) {
            size_t length = 0;
            const char_t* chars = 0;
            if ((chars = connect_response.has_chars(length))) {
                this->out(chars, length);
                this->outln();
            }
        }
        return err;
    }

    /// ...options...
    virtual int on_volume_up_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        string_t& connect_request = this->connect_request();
        int err = 0;
        this->set_connect_run(argc, argv, env);
        connect_request.assign("MVUP");
        send_request_ = &derives::send_cr_request;
        recv_response_ = &derives::recv_cr_response;
        return err;
    }
    virtual int on_volume_down_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        string_t& connect_request = this->connect_request();
        int err = 0;
        this->set_connect_run(argc, argv, env);
        connect_request.assign("MVDOWN");
        send_request_ = &derives::send_cr_request;
        recv_response_ = &derives::recv_cr_response;
        return err;
    }
    virtual int on_volume_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        string_t& connect_request = this->connect_request();
        int err = 0;
        this->set_connect_run(argc, argv, env);
        connect_request.assign("MV");
        if ((optarg) && (optarg[0])) {
            connect_request.append(optarg);
        } else {
            connect_request.append("?");
        }
        send_request_ = &derives::send_cr_request;
        recv_response_ = &derives::recv_cr_response;
        return err;
    }

    virtual int on_surround_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        string_t& connect_request = this->connect_request();
        int err = 0;
        this->set_connect_run(argc, argv, env);
        connect_request.assign("MSDOLBY DIGITAL");
        send_request_ = &derives::send_cr_request;
        recv_response_ = 0;
        return err;
    }
    virtual int on_stereo_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        string_t& connect_request = this->connect_request();
        int err = 0;
        this->set_connect_run(argc, argv, env);
        connect_request.assign("MSSTEREO");
        send_request_ = &derives::send_cr_request;
        recv_response_ = 0;
        return err;
    }
    virtual int on_sound_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        string_t& connect_request = this->connect_request();
        int err = 0;
        this->set_connect_run(argc, argv, env);
        connect_request.assign("MS");
        if ((optarg) && (optarg[0])) {
            connect_request.append(optarg);
            recv_response_ = 0;
        } else {
            connect_request.append("?");
            recv_response_ = &derives::recv_cr_response;
        }
        send_request_ = &derives::send_cr_request;
        return err;
    }

    virtual int on_input_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        string_t& connect_request = this->connect_request();
        int err = 0;
        this->set_connect_run(argc, argv, env);
        connect_request.assign("SI");
        if ((optarg) && (optarg[0])) {
            connect_request.append(optarg);
        } else {
            connect_request.append("?");
        }
        send_request_ = &derives::send_cr_request;
        recv_response_ = &derives::recv_cr_response;
        return err;
    }

    virtual int on_power_on_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        string_t& connect_request = this->connect_request();
        int err = 0;
        this->set_connect_run(argc, argv, env);
        connect_request.assign("PWON");
        send_request_ = &derives::send_cr_request;
        recv_response_ = 0;
        return err;
    }
    virtual int on_power_off_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        string_t& connect_request = this->connect_request();
        int err = 0;
        this->set_connect_run(argc, argv, env);
        connect_request.assign("PWSTANDBY");
        send_request_ = &derives::send_cr_request;
        recv_response_ = 0;
        return err;
    }
    virtual int on_power_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        string_t& connect_request = this->connect_request();
        int err = 0;
        this->set_connect_run(argc, argv, env);
        connect_request.assign("PW");
        if ((optarg) && (optarg[0])) {
            connect_request.append(optarg);
        } else {
            connect_request.append("?");
        }
        send_request_ = &derives::send_cr_request;
        recv_response_ = &derives::recv_cr_response;
        return err;
    }

    virtual int on_argument
    (const char_t* arg, int argind, int argc, char_t** argv, char** env) {
        int err = 0;
        if ((arg) && (arg[0])) {
            string_t& connect_request = this->connect_request();
            this->set_connect_run(argc, argv, env);
            connect_request.assign(arg);
            send_request_ = &derives::send_cr_request;
            recv_response_ = &derives::recv_cr_response;
        }
        return err;
    }

    /// connect_request / onnect_response
    virtual string_t& connect_request() const {
        return (string_t&)connect_request_;
    }
    virtual string_t& connect_response() const {
        return (string_t&)connect_response_;
    }

protected:
    string_t connect_request_, connect_response_;
}; /// class maint
typedef maint<> main;

} /// namespace client
} /// namespace marantz
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// XOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_HPP
