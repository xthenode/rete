########################################################################
# Copyright (c) 1988-2020 $organization$
#
# This software is provided by the author and contributors ``as is''
# and any express or implied warranties, including, but not limited to,
# the implied warranties of merchantability and fitness for a particular
# purpose are disclaimed. In no event shall the author or contributors
# be liable for any direct, indirect, incidental, special, exemplary,
# or consequential damages (including, but not limited to, procurement
# of substitute goods or services; loss of use, data, or profits; or
# business interruption) however caused and on any theory of liability,
# whether in contract, strict liability, or tort (including negligence
# or otherwise) arising in any way out of the use of this software,
# even if advised of the possibility of such damage.
#
#   File: winsock.pri
#
# Author: $author$
#   Date: 11/4/2020
#
# QtCreator .pri file for rete executable winsock
########################################################################

########################################################################
# winsock

# winsock TARGET
#
winsock_TARGET = winsock

# winsock INCLUDEPATH
#
winsock_INCLUDEPATH += \
$${rete_INCLUDEPATH} \

winsock_INCLUDEPATH += \
$${RETE_SRC}/xos/platform/bsd/microsoft/windows/sockets \
$${RETE_SRC}/xos/platform/microsoft/windows/bsd/sockets \

# winsock DEFINES
#
winsock_DEFINES += \
$${rete_DEFINES} \
LOGGING_LEVELS_DEFAULT=LOGGING_LEVELS_INFO \
XOS_APP_CONSOLE_MICROSOFT_WINDOWS_SOCKETS_BASE_MAIN_INSTANCE \

winsock_DEFINES += \
WINSOCK_1 \

########################################################################
# winsock OBJECTIVE_HEADERS
#
#winsock_OBJECTIVE_HEADERS += \
#$${RETE_SRC}/rete/base/Base.hh \

# winsock OBJECTIVE_SOURCES
#
#winsock_OBJECTIVE_SOURCES += \
#$${RETE_SRC}/rete/base/Base.mm \

########################################################################
# winsock HEADERS
#
winsock_HEADERS += \
$${RETE_SRC}/xos/platform/bsd/microsoft/windows/sockets/winsock.h \
$${RETE_SRC}/xos/platform/bsd/microsoft/windows/sockets/winsock.hpp \
$${RETE_SRC}/xos/platform/bsd/microsoft/windows/sockets/winsock2.h \
$${RETE_SRC}/xos/platform/bsd/microsoft/windows/sockets/winsock2.hpp \
\
$${RETE_SRC}/xos/platform/microsoft/windows/bsd/sockets/arpa/inet.h \
$${RETE_SRC}/xos/platform/microsoft/windows/bsd/sockets/arpa/inet.hpp \
$${RETE_SRC}/xos/platform/microsoft/windows/bsd/sockets/netinet/in.h \
$${RETE_SRC}/xos/platform/microsoft/windows/bsd/sockets/netinet/in.hpp \
$${RETE_SRC}/xos/platform/microsoft/windows/bsd/sockets/netinet/tcp.h \
$${RETE_SRC}/xos/platform/microsoft/windows/bsd/sockets/netinet/tcp.hpp \
$${RETE_SRC}/xos/platform/microsoft/windows/bsd/sockets/sys/socket.h \
$${RETE_SRC}/xos/platform/microsoft/windows/bsd/sockets/sys/socket.hpp \
$${RETE_SRC}/xos/platform/microsoft/windows/bsd/sockets/sys/un.h \
$${RETE_SRC}/xos/platform/microsoft/windows/bsd/sockets/sys/un.hpp \
$${RETE_SRC}/xos/platform/microsoft/windows/bsd/sockets/netdb.h \
$${RETE_SRC}/xos/platform/microsoft/windows/bsd/sockets/netdb.hpp \
\
$${RETE_SRC}/xos/network/address.hpp \
$${RETE_SRC}/xos/network/transport.hpp \
$${RETE_SRC}/xos/network/endpoint.hpp \
$${RETE_SRC}/xos/network/interface.hpp \
$${RETE_SRC}/xos/network/sockets/interface.hpp \
$${RETE_SRC}/xos/network/sockets/endpoint.hpp \
$${RETE_SRC}/xos/network/sockets/transport.hpp \
$${RETE_SRC}/xos/network/sockets/address.hpp \
\
$${RETE_SRC}/xos/app/console/network/sockets/base/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/base/main.hpp \
\
$${RETE_SRC}/xos/app/console/microsoft/windows/sockets/base/main_opt.hpp \
$${RETE_SRC}/xos/app/console/microsoft/windows/sockets/base/main.hpp \
\
$${NADIR_SRC}/xos/console/main_main.hpp \

# winsock SOURCES
#
winsock_SOURCES += \
$${RETE_SRC}/xos/platform/microsoft/windows/bsd/sockets/arpa/inet.cpp \
$${RETE_SRC}/xos/platform/microsoft/windows/bsd/sockets/netinet/in.cpp \
$${RETE_SRC}/xos/platform/microsoft/windows/bsd/sockets/netinet/tcp.cpp \
$${RETE_SRC}/xos/platform/microsoft/windows/bsd/sockets/sys/socket.cpp \
$${RETE_SRC}/xos/platform/microsoft/windows/bsd/sockets/sys/un.cpp \
$${RETE_SRC}/xos/platform/microsoft/windows/bsd/sockets/netdb.cpp \
\
$${RETE_SRC}/xos/network/sockets/address.cpp \
$${RETE_SRC}/xos/network/sockets/transport.cpp \
$${RETE_SRC}/xos/network/sockets/endpoint.cpp \
$${RETE_SRC}/xos/network/sockets/interface.cpp \
\
$${RETE_SRC}/xos/app/console/microsoft/windows/sockets/base/main_opt.cpp \
$${RETE_SRC}/xos/app/console/microsoft/windows/sockets/base/main.cpp \
\
$${NADIR_SRC}/xos/console/main_main.cpp \

_winsock_SOURCES += \
$${RETE_SRC}/xos/platform/bsd/microsoft/windows/sockets/winsock.cpp \
$${RETE_SRC}/xos/platform/bsd/microsoft/windows/sockets/winsock2.cpp \

########################################################################
# winsock FRAMEWORKS
#
winsock_FRAMEWORKS += \
$${rete_FRAMEWORKS} \

# winsock LIBS
#
winsock_LIBS += \
$${rete_LIBS} \
$${rete_winsock_LIBS} \


