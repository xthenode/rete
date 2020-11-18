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
#   File: libwinsock.pri
#
# Author: $author$
#   Date: 11/16/2020
#
# QtCreator .pri file for rete library libwinsock
########################################################################

########################################################################
# libwinsock

# libwinsock TARGET
#
libwinsock_TARGET = winsock
libwinsock_TEMPLATE = lib
libwinsock_CONFIG += staticlib

# libwinsock INCLUDEPATH
#
libwinsock_INCLUDEPATH += \
$${rete_INCLUDEPATH} \

# libwinsock DEFINES
#
libwinsock_DEFINES += \
$${rete_DEFINES} \

########################################################################
# libwinsock OBJECTIVE_HEADERS
#
#libwinsock_OBJECTIVE_HEADERS += \
#$${RETE_SRC}/rete/base/Base.hh \

# libwinsock OBJECTIVE_SOURCES
#
#libwinsock_OBJECTIVE_SOURCES += \
#$${RETE_SRC}/rete/base/Base.mm \

########################################################################
# libwinsock HEADERS
#
libwinsock_HEADERS += \
$${RETE_SRC}/xos/platform/bsd/microsoft/windows/sockets/winsock.h \
$${RETE_SRC}/xos/platform/bsd/microsoft/windows/sockets/winsock.hpp \
$${RETE_SRC}/xos/platform/bsd/microsoft/windows/sockets/winsock2.h \
$${RETE_SRC}/xos/platform/bsd/microsoft/windows/sockets/winsock2.hpp \

# libwinsock SOURCES
#
libwinsock_SOURCES += \
$${RETE_SRC}/xos/platform/bsd/microsoft/windows/sockets/winsock.cpp \
$${RETE_SRC}/xos/platform/bsd/microsoft/windows/sockets/winsock2.cpp \

########################################################################



