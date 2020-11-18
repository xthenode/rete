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
///   File: netdb.h
///
/// Author: $author$
///   Date: 10/27/2020
///////////////////////////////////////////////////////////////////////
/*/
#ifndef XOS_PLATFORM_MICROSOFT_WINDOWS_BSD_SOCKETS_NETDB_H
#define XOS_PLATFORM_MICROSOFT_WINDOWS_BSD_SOCKETS_NETDB_H

#include "xos/platform/build.h"

#if defined(WINDOWS)
#else /*/ defined(WINDOWS) /*/
#include "sys/socket.h"
#if defined(WINSOCK_2)
/*/
/// Use Windows Sockets 2 API
/*/
#else /*/ defined(WINSOCK_2) /*/
#if defined(WINSOCK_1)
/*/
/// Use Windows Sockets 1 API
/*/
typedef struct addrinfo {
    int ai_flags;           
    int ai_family;          
    int ai_socktype;        
    int ai_protocol;        
    socklen_t ai_addrlen;   
    struct sockaddr *ai_addr;
    char *ai_canonname;      
    struct addrinfo *ai_next;
} ADDRINFO, *PADDRINFO, *LPADDRINFO;
#else /*/ defined(WINSOCK_1) /*/
/*/
/// Use Default Windows Sockets API
/*/
#endif /*/ defined(WINSOCK_1) /*/
#endif /*/ defined(WINSOCK_2) /*/
#endif /*/ defined(WINDOWS) /*/

#if defined(__cplusplus)
extern "C" {
#endif /*/ defined(__cplusplus) /*/

#if defined(WINDOWS)
#else /*/ defined(WINDOWS) /*/
#endif /*/ defined(WINDOWS) /*/

#if defined(__cplusplus)
} /*/ extern "C" /*/
#endif /*/ defined(__cplusplus) /*/

#endif /*/ XOS_PLATFORM_MICROSOFT_WINDOWS_BSD_SOCKETS_NETDB_H /*/
