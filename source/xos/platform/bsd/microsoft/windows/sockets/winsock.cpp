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
///   File: winsock.cpp
///
/// Author: $author$
///   Date: 11/5/2020
///////////////////////////////////////////////////////////////////////
#include <netdb.h>
#include "xos/platform/bsd/microsoft/windows/sockets/winsock.hpp"
#include "xos/platform/bsd/microsoft/windows/sockets/winsock.c"
#include "xos/base/logger.hpp"

namespace xos {
namespace platform {
namespace bsd {
namespace microsoft {
namespace windows {
namespace sockets {

#if !defined(WINDOWS)
#else /// !defined(WINDOWS)
#endif /// !defined(WINDOWS)

} /// namespace sockets
} /// namespace windows
} /// namespace microsoft
} /// namespace bsd
} /// namespace platform
} /// namespace xos

#if !defined(WINDOWS)

SOCKET winsock_socket(int af, int type, int protocol) {
    SOCKET s = INVALID_SOCKET;
    return s;
}
int winsock_closesocket(SOCKET s) {
    int err = 0;
    return err;
}

struct winsock_hostent *winsock_gethostent(struct hostent* hostent) {
    if ((hostent)) {
        char **addr_list = 0, *addr_0 = 0;
        static char h_name[256], *h_addr_list[2];
        static struct winsock_in_addr h_addr_0;
        static struct winsock_hostent winsock_hostent;

        ::memset(&h_name, 0, sizeof(h_name));
        ::memset(&h_addr_list, 0, sizeof(h_addr_list));
        ::memset(&h_addr_0, 0, sizeof(h_addr_0));
        ::memset(&winsock_hostent, 0, sizeof(winsock_hostent));
        ::strncpy(h_name, hostent->h_name, sizeof(h_name)-1);
        h_addr_list[0] = (char*)&h_addr_0;
        winsock_hostent.h_name = h_name;
        winsock_hostent.h_addrtype = winsock_AF_UNSPEC;
        winsock_hostent.h_addr_list = h_addr_list;
        switch (hostent->h_addrtype) {
        case AF_INET:
            if ((addr_list = hostent->h_addr_list) && (addr_0 = addr_list[0])) {
                winsock_hostent.h_addrtype = winsock_AF_INET;
                winsock_hostent.h_length = sizeof(h_addr_0);
                h_addr_0.S_un.S_un_b.s_b1 = addr_0[0];
                h_addr_0.S_un.S_un_b.s_b2 = addr_0[1];
                h_addr_0.S_un.S_un_b.s_b3 = addr_0[2];
                h_addr_0.S_un.S_un_b.s_b4 = addr_0[3];
                return &winsock_hostent;
            }
            break;
        }
    }
    return 0;
}
struct winsock_hostent *winsock_gethostbyaddr(const char *addr, int len, int type) {
    if ((addr) && (0 < len)) {
        if ((winsock_AF_INET == type) && (sizeof(struct winsock_in_addr) <= len)) {
            struct hostent* hostent = 0;

            LOGGER_LOG_DEBUG("::gethostbyaddr(" << ::xos::pointer_to_string((pointer_t)addr) << ", " << ::xos::int_to_string(len) << ", AF_INET)...");
            if ((hostent = ::gethostbyaddr(addr, len, AF_INET))) {
                LOGGER_LOG_DEBUG("...::gethostbyaddr(" << ::xos::pointer_to_string((pointer_t)addr) << ", " << ::xos::int_to_string(len) << ", AF_INET)");
                return winsock_gethostent(hostent);
            } else {
                LOGGER_LOG_ERROR("...failed 0 = ::gethostbyaddr(" << ::xos::pointer_to_string((pointer_t)addr) << ", " << ::xos::int_to_string(len) << ", AF_INET)");
            }
        }
    }
    return 0;
}
struct winsock_hostent *winsock_gethostbyname(const char *name) {
    if ((name) && (name[0])) {
        struct hostent* hostent = 0;

        LOGGER_LOG_DEBUG("::gethostbyname(\"" << name << "\")...");
        if ((hostent = ::gethostbyname(name))) {
            LOGGER_LOG_DEBUG("...::gethostbyname(\"" << name << "\")");
            return winsock_gethostent(hostent);
        } else {
            LOGGER_LOG_ERROR("...failed 0 = ::gethostbyname(\"" << name << "\")");
        }
    }
    return 0;
}

int WSAStartup(WORD wVersionRequired, LPWSADATA lpWSAData) {
    int err = 0;
    return err;
}
int WSACleanup() {
    int err = 0;
    return err;
}
int WSAGetLastError() {
    int err = -1;
    return err;
}

#else /// !defined(WINDOWS)
#endif /// !defined(WINDOWS)
