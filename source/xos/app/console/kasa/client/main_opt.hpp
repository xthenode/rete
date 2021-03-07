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
///   File: main_opt.hpp
///
/// Author: $author$
///   Date: 3/3/2021
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_KASA_CLIENT_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_KASA_CLIENT_MAIN_OPT_HPP

#include "xos/app/console/network/sockets/client/main.hpp"
#include "xos/app/console/kasa/base/main.hpp"

#define XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_ON_OPT "power-on"
#define XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_ON_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_ON_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_ON_OPTARG ""
#define XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_ON_OPTUSE ""
#define XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_ON_OPTVAL_S "n::"
#define XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_ON_OPTVAL_C 'n'
#define XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_ON_OPTION \
   {XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_ON_OPT, \
    XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_ON_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_ON_OPTARG_RESULT, \
    XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_ON_OPTVAL_C}, \

#define XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_OFF_OPT "power-off"
#define XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_OFF_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_OFF_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_OFF_OPTARG ""
#define XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_OFF_OPTUSE ""
#define XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_OFF_OPTVAL_S "f::"
#define XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_OFF_OPTVAL_C 'f'
#define XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_OFF_OPTION \
   {XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_OFF_OPT, \
    XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_OFF_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_OFF_OPTARG_RESULT, \
    XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_OFF_OPTVAL_C}, \

#define XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_OPT "power"
#define XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_OPTARG ""
#define XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_OPTUSE ""
#define XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_OPTVAL_S "w::"
#define XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_OPTVAL_C 'w'
#define XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_OPTION \
   {XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_OPT, \
    XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_OPTARG_RESULT, \
    XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_OPTVAL_C}, \

#define XOS_APP_CONSOLE_KASA_CLIENT_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_ON_OPTVAL_S \
   XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_OFF_OPTVAL_S \
   XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_OPTVAL_S \

#define XOS_APP_CONSOLE_KASA_CLIENT_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_ON_OPTION \
   XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_OFF_OPTION \
   XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_OPTION \

#define XOS_APP_CONSOLE_KASA_CLIENT_MAIN_OPTIONS_CHARS \
   XOS_APP_CONSOLE_KASA_CLIENT_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_NETWORK_CLIENT_MAIN_OPTIONS_CHARS \

#define XOS_APP_CONSOLE_KASA_CLIENT_MAIN_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_KASA_CLIENT_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_NETWORK_CLIENT_MAIN_OPTIONS_OPTIONS \
   
namespace xos {
namespace app {
namespace console {
namespace kasa {
namespace client {

/// class main_optt
template 
<class TExtends = kasa::base::maint<kasa::base::main_optt<network::sockets::client::maint<> > >, 
 class TImplements = typename TExtends::implements>

class exported main_optt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef main_optt derives;

    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;
    typedef typename extends::string_t string_t;
    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };

    /// constructor / destructor
    main_optt() {
    }
    virtual ~main_optt() {
    }
private:
    main_optt(const main_optt& copy) {
    }

protected:
    typedef typename extends::in_reader_t in_reader_t;
    typedef typename extends::out_writer_t out_writer_t;
    typedef typename extends::err_writer_t err_writer_t;

    /// ...option...
    virtual int on_power_on_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        }
        return err;
    }
    virtual const char_t* power_on_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_ON_OPTUSE;
        optarg = XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_ON_OPTARG;
        return chars;
    }
    virtual int on_power_off_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        }
        return err;
    }
    virtual const char_t* power_off_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_OFF_OPTUSE;
        optarg = XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_OFF_OPTARG;
        return chars;
    }
    virtual int on_power_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        }
        return err;
    }
    virtual const char_t* power_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_OPTUSE;
        optarg = XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_OPTARG;
        return chars;
    }
    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {
        case XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_ON_OPTVAL_C:
            err = this->on_power_on_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_OFF_OPTVAL_C:
            err = this->on_power_off_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_OPTVAL_C:
            err = this->on_power_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        default:
            err = extends::on_option(optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    virtual const char_t* option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        switch(longopt->val) {
        case XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_ON_OPTVAL_C:
            chars = power_on_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_OFF_OPTVAL_C:
            chars = power_off_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_KASA_CLIENT_MAIN_POWER_OPTVAL_C:
            chars = power_option_usage(optarg, longopt);
            break;
        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = XOS_APP_CONSOLE_KASA_CLIENT_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            XOS_APP_CONSOLE_KASA_CLIENT_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }
}; /// class main_optt
typedef main_optt<> main_opt;

} /// namespace client
} /// namespace kasa
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_KASA_CLIENT_MAIN_OPT_HPP
