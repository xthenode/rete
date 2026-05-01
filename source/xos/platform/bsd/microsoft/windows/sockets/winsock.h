/*/
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
///   File: winsock.h
///
/// Author: $author$
///   Date: 11/5/2020
///////////////////////////////////////////////////////////////////////
/*/
#ifndef XOS_PLATFORM_BSD_MICROSOFT_WINDOWS_SOCKETS_WINSOCK_H
#define XOS_PLATFORM_BSD_MICROSOFT_WINDOWS_SOCKETS_WINSOCK_H

#include "xos/platform/types.h"

#if !defined(WINDOWS)

#if !defined(WINSOCK)
#if defined(WINSOCK_1) || defined(WINSOCK_2)
#define WINSOCK
#endif /// defined(WINSOCK_1) || defined(WINSOCK_2)
#endif /// !defined(WINSOCK)

#if defined(WINSOCK)
#define AF_UNSPEC winsock_AF_UNSPEC
#define AF_UNIX winsock_AF_UNIX
#define AF_INET winsock_AF_INET
#endif /// defined(WINSOCK)
enum {
    winsock_AF_UNSPEC       = 0,     
    winsock_AF_UNIX         = 1,     
    winsock_AF_INET         = 2,     
    /*AF_IMPLINK      = 3,     
    AF_PUP          = 4,     
    AF_CHAOS        = 5,     
    AF_NS           = 6,     
    AF_IPX          = 6,     
    AF_ISO          = 7,     
    AF_OSI          = AF_ISO,
    AF_ECMA         = 8,     
    AF_DATAKIT      = 9,     
    AF_CCITT        = 10,    
    AF_SNA          = 11,    
    AF_DECnet       = 12,    
    AF_DLI          = 13,    
    AF_LAT          = 14,    
    AF_HYLINK       = 15,    
    AF_APPLETALK    = 16,    
    AF_NETBIOS      = 17,    
    AF_MAX          = 18*/
};

#if defined(WINSOCK)
#define PF_UNSPEC winsock_PF_UNSPEC
#define PF_UNIX winsock_PF_UNIX
#define PF_INET winsock_PF_INET
#endif /// defined(WINSOCK)
enum {
    winsock_PF_UNSPEC    = winsock_AF_UNSPEC,
    winsock_PF_UNIX      = winsock_AF_UNIX,
    winsock_PF_INET      = winsock_AF_INET,
    /*PF_IMPLINK   = AF_IMPLINK,
    PF_PUP       = AF_PUP,
    PF_CHAOS     = AF_CHAOS,
    PF_NS        = AF_NS,
    PF_IPX       = AF_IPX,
    PF_ISO       = AF_ISO,
    PF_OSI       = AF_OSI,
    PF_ECMA      = AF_ECMA,
    PF_DATAKIT   = AF_DATAKIT,
    PF_CCITT     = AF_CCITT,
    PF_SNA       = AF_SNA,
    PF_DECnet    = AF_DECnet,
    PF_DLI       = AF_DLI,
    PF_LAT       = AF_LAT,
    PF_HYLINK    = AF_HYLINK,
    PF_APPLETALK = AF_APPLETALK,
    PF_MAX       = AF_MAX,*/
};

#if defined(WINSOCK)
#define SOCK_STREAM winsock_SOCK_STREAM
#define SOCK_DGRAM winsock_SOCK_DGRAM
#define SOCK_RAW winsock_SOCK_RAW
#endif /// defined(WINSOCK)
enum {
    winsock_SOCK_STREAM    = 1,
    winsock_SOCK_DGRAM     = 2,
    winsock_SOCK_RAW       = 3,
    /*SOCK_RDM       = 4,
    SOCK_SEQPACKET = 5,*/
};

#if defined(WINSOCK)
#define SO_REUSEADDR winsock_SO_REUSEADDR
#define SO_KEEPALIVE winsock_SO_KEEPALIVE
#define SO_LINGER winsock_SO_LINGER
#define SO_DONTLINGER winsock_SO_DONTLINGER
#endif /// defined(WINSOCK)
enum {
    /*SO_DEBUG       = 0x0001,
    SO_ACCEPTCONN  = 0x0002,*/
    winsock_SO_REUSEADDR   = 0x0004,
    winsock_SO_KEEPALIVE   = 0x0008,
    /*SO_DONTROUTE   = 0x0010,
    SO_BROADCAST   = 0x0020,
    SO_USELOOPBACK = 0x0040,*/
    winsock_SO_LINGER      = 0x0080,
    winsock_SO_DONTLINGER  = 0x0000,
    /*SO_OOBINLINE   = 0x0100,
    SO_SNDBUF      = 0x1001, 
    SO_RCVBUF      = 0x1002, 
    SO_SNDLOWAT    = 0x1003, 
    SO_RCVLOWAT    = 0x1004, 
    SO_SNDTIMEO    = 0x1005, 
    SO_RCVTIMEO    = 0x1006, 
    SO_ERROR       = 0x1007, 
    SO_TYPE        = 0x1008,*/
};

/*enum {
    SOL_SOCKET = 0xffff
};*/

#if defined(WINSOCK)
#define SOMAXCONN winsock_SOMAXCONN
#endif /// defined(WINSOCK)
enum {
    winsock_SOMAXCONN = 5
};

#if defined(WINSOCK)
#define sockaddr winsock_sockaddr
#endif /// defined(WINSOCK)
typedef struct winsock_sockaddr {
    unsigned short sa_family;
    char           sa_data[14];
} SOCKADDR, *PSOCKADDR, *LPSOCKADDR;

#if defined(WINSOCK)
#define sockproto winsock_sockproto
#endif /// defined(WINSOCK)
typedef struct winsock_sockproto {
    unsigned short sp_family;
    unsigned short sp_protocol;
} SOCKPROTO, *PSOCKPROTO, *LPSOCKPROTO;

#if defined(WINSOCK)
#define INADDR_ANY winsock_INADDR_ANY
#define INADDR_LOOPBACK winsock_INADDR_LOOPBACK
#define INADDR_BROADCAST winsock_INADDR_BROADCAST
#define INADDR_NONE winsock_INADDR_NONE
#endif /// defined(WINSOCK)
enum {
    winsock_INADDR_ANY = 0x00000000,
    winsock_INADDR_LOOPBACK = 0x7f000001,
    winsock_INADDR_BROADCAST = 0xffffffff,
    winsock_INADDR_NONE = 0xffffffff,
};

#if defined(WINSOCK)
#define in_addr winsock_in_addr
#endif /// defined(WINSOCK)
typedef struct winsock_in_addr {
    union {
        struct { unsigned char s_b1,s_b2,s_b3,s_b4; } S_un_b;
        struct { unsigned short s_w1,s_w2; } S_un_w;
        uint32_t S_addr;
    } S_un;
#define s_addr  S_un.S_addr
#define s_host  S_un.S_un_b.s_b2
#define s_net   S_un.S_un_b.s_b1
#define s_imp   S_un.S_un_w.s_w2
#define s_impno S_un.S_un_b.s_b4
#define s_lh    S_un.S_un_b.s_b3
} IN_ADDR, *PIN_ADDR, *LPIN_ADDR;

#if defined(WINSOCK)
#define sockaddr_in winsock_sockaddr_in
#endif /// defined(WINSOCK)
typedef struct winsock_sockaddr_in {
    short   sin_family;
    unsigned short sin_port;
    struct  winsock_in_addr sin_addr;
    char    sin_zero[8];
} SOCKADDR_IN, *PSOCKADDR_IN, *LPSOCKADDR_IN;

#if defined(WINSOCK)
#define linger winsock_linger
#endif /// defined(WINSOCK)
typedef struct winsock_linger {
    unsigned short l_onoff;
    unsigned short l_linger;
} LINGER, *PLINGER, *LPLINGER;

#if defined(WINSOCK)
#define hostent winsock_hostent
#endif /// defined(WINSOCK)
typedef struct winsock_hostent {
    char*  h_name; 
    char** h_aliases;
    short  h_addrtype;
    short  h_length;
    char** h_addr_list;
#define h_addr  h_addr_list[0]
} HOSTENT, *PHOSTENT, *LPHOSTENT;

#if defined(WINSOCK)
#define IPPROTO_IP winsock_IPPROTO_IP
#define IPPROTO_TCP winsock_IPPROTO_TCP
#define IPPROTO_UDP winsock_IPPROTO_UDP
#define IPPROTO_RAW winsock_IPPROTO_RAW
#endif /// defined(WINSOCK)
enum {
    winsock_IPPROTO_IP   = 0,  
    /*IPPROTO_ICMP = 1,  
    IPPROTO_GGP  = 2,*/
    winsock_IPPROTO_TCP  = 6,  
    /*IPPROTO_PUP  = 12,*/
    winsock_IPPROTO_UDP  = 17, 
    /*IPPROTO_IDP  = 22, 
    IPPROTO_ND   = 77,*/
    winsock_IPPROTO_RAW  = 255,
    /*IPPROTO_MAX  = 256,*/
};

typedef void* SOCKET;
#define INVALID_SOCKET_VALUE 0
#define INVALID_SOCKET ((SOCKET)INVALID_SOCKET_VALUE)
#define SOCKET_ERROR -1

enum {
    WSASYS_STATUS_LEN  = 128,
    WSADESCRIPTION_LEN = 256
};

typedef struct WSAData {
    WORD           wVersion;
    WORD           wHighVersion;
    char           szDescription[WSADESCRIPTION_LEN+1];
    char           szSystemStatus[WSASYS_STATUS_LEN+1];
    unsigned short iMaxSockets;
    unsigned short iMaxUdpDg;
    char*          lpVendorInfo;
} WSADATA, *PWSADATA, *LPWSADATA;

#else /*/ !defined(WINDOWS) /*/
#endif /*/ !defined(WINDOWS) /*/

#if defined(__cplusplus)
extern "C" {
#endif /*/ defined(__cplusplus) /*/

#if !defined(WINDOWS)

#if defined(WINSOCK)
#define socket winsock_socket
#define closesocket winsock_closesocket
#define gethostbyaddr winsock_gethostbyaddr
#define gethostbyname winsock_gethostbyname
#endif /// defined(WINSOCK)

SOCKET winsock_socket(int af, int type, int protocol);
int winsock_closesocket(SOCKET s);

struct winsock_hostent *winsock_gethostbyaddr(const char *addr, int len, int type);
struct winsock_hostent *winsock_gethostbyname(const char *name);

int WSAStartup(WORD wVersionRequired, LPWSADATA lpWSAData);
int WSACleanup();
int WSAGetLastError();

#else /*/ !defined(WINDOWS) /*/
#endif /*/ !defined(WINDOWS) /*/

#if defined(__cplusplus)
} /*/ extern "C" /*/
#endif /*/ defined(__cplusplus) /*/

#endif /*/ XOS_PLATFORM_BSD_MICROSOFT_WINDOWS_SOCKETS_WINSOCK_H /*/
