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
#   File: libwinsock.pro
#
# Author: $author$
#   Date: 11/16/2020
#
# QtCreator .pro file for rete library libwinsock
########################################################################
include(../../../../../build/QtCreator/rete.pri)
include(../../../../QtCreator/rete.pri)
include(../../rete.pri)
include(../../../../QtCreator/lib/libwinsock/libwinsock.pri)

TARGET = $${libwinsock_TARGET}
TEMPLATE = $${libwinsock_TEMPLATE}
CONFIG += $${libwinsock_CONFIG}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${libwinsock_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${libwinsock_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${libwinsock_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${libwinsock_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${libwinsock_HEADERS} \
$${OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${libwinsock_SOURCES} \

########################################################################


