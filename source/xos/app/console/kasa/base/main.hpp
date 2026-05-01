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
#ifndef XOS_APP_CONSOLE_KASA_BASE_MAIN_HPP
#define XOS_APP_CONSOLE_KASA_BASE_MAIN_HPP

#include "xos/app/console/kasa/base/main_opt.hpp"

namespace xos {
namespace app {
namespace console {
namespace kasa {
namespace base {

/// class maint
template 
<class TExtends = kasa::base::main_optt<>, 
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
    maint()
    : request_(0),
      power_on_request_("{\"system\":{\"set_relay_state\":{\"state\":1}}}"), 
      power_off_request_("{\"system\":{\"set_relay_state\":{\"state\":0}}}"),
      power_request_("{\"system\":{\"get_sysinfo\":null}}") {
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

    /// request
    string_t& (derives::*request_)() const;
    virtual string_t& request() const {
        if ((request_)) {
            return (this->*request_)();
        }
        return power_on_request();
    }
    /// on / off request
    virtual string_t& power_on_request() const {
        return (string_t&)power_on_request_;
    }
    virtual int set_power_on_request(int argc, char_t**argv, char_t**env) {
        int err = 0;
        request_ = &derives::power_on_request;
        return err;
    }
    virtual string_t& power_off_request() const {
        return (string_t&)power_off_request_;
    }
    virtual int set_power_off_request(int argc, char_t**argv, char_t**env) {
        int err = 0;
        request_ = &derives::power_off_request;
        return err;
    }
    virtual string_t& power_request() const {
        return (string_t&)power_request_;
    }
    virtual int set_power_request(int argc, char_t**argv, char_t**env) {
        int err = 0;
        request_ = &derives::power_request;
        return err;
    }

    /// decrypt / encrypt text
    virtual string_t& decrypt_text(const string_t& r) {
        string_t& d = plain_text_;
        const char_t* chars = 0;
        size_t length = 0;

        d.clear();
        if ((chars = r.has_chars(length)) && (4 < length)) {
            char_t a = 0, i = 0, k = 0;
            
            for (k = 171, chars += 4, length -= 4; length; --length, ++chars) {
                i = *chars;
                a = k ^ i;
                k = i;
                d.append(&a, 1);
            }
        }
        return (string_t&)plain_text_;
    }
    virtual string_t& plain_text() const {
        return (string_t&)plain_text_;
    }
    virtual string_t& encrypt_text(const string_t& s) {
        string_t& e = cipher_text_;
        const char_t* chars = 0;
        size_t length = 0;

        e.clear();
        if ((chars = s.has_chars(length))) {
            char_t a = 0, i = 0, k = 0;
            size_t lsb = length, msb = 0, remain = 0;
            
            for (remain = 4; remain; --remain) {
                msb = (msb << 8) | (lsb & 255);
                lsb = (lsb >> 8);
            }
            for (remain = 4; remain; --remain) {
                i = (char_t)(msb & 255);
                msb = (msb >> 8);
                e.append(&i, 1);
            }
            for (k = 171; length; --length, ++chars) {
                i = *chars;
                a = k ^ i;
                k = a;
                e.append(&a, 1);
            }
        }
        return (string_t&)cipher_text_;
    }
    virtual string_t& cipher_text() const {
        return (string_t&)cipher_text_;
    }
    
protected:
    string_t power_on_request_, power_off_request_, power_request_, cipher_text_, plain_text_;
}; /// class maint
typedef maint<> main;

} /// namespace base
} /// namespace kasa
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_KASA_BASE_MAIN_HPP
