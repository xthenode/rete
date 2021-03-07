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
///   Date: 3/3/2021
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_KASA_SERVER_MAIN_HPP
#define XOS_APP_CONSOLE_KASA_SERVER_MAIN_HPP

#include "xos/app/console/kasa/server/main_opt.hpp"

namespace xos {
namespace app {
namespace console {
namespace kasa {
namespace server {

/// class maint
template 
<class TExtends = kasa::server::main_opt, 
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

    /// ...process_request
    virtual int before_process_request
    (string_t& accept_request, xos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        int err = 0;
        size_t length = 0;
        const char_t* chars = 0;

        if ((chars = accept_request.has_chars(length))) {
            string_t& decrypt_text = this->decrypt_text(accept_request);

            if ((chars = decrypt_text.has_chars(length))) {
                accept_request.assign(chars, length);
                accept_request.appendln();
            }
        }
        return err;
    }

    /// ...recv_request
    virtual int recv_request
    (string_t& accept_request, xos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        int err = 0;
        char_t c = 0;

        if (!(err = this->recv_sizeof_sized_crlf2(4, accept_request, c, cn, argc, argv, env))) {
            err = this->all_process_request(accept_request, cn, argc, argv, env);
        }
        return err;
    }

    /// ...send_response
    virtual int before_send_response
    (xos::network::sockets::interface& cn, string_t& accept_response, int argc, char_t** argv, char_t**env) {
        int err = 0;
        size_t length = 0;
        const char_t* chars = 0;
        string_t &plain_text = this->plain_text(), 
                 &encrypt_text = this->encrypt_text(plain_text);
        
        if ((chars = encrypt_text.has_chars(length))) {
            accept_response.assign(chars, length);
        }
        return err;
    }

}; /// class maint
typedef maint<> main;

} /// namespace server
} /// namespace kasa
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_KASA_SERVER_MAIN_HPP
