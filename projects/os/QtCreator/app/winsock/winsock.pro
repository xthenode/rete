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
#   File: winsock.pro
#
# Author: $author$
#   Date: 11/4/2020
#
# QtCreator .pro file for rete executable winsock
########################################################################
include(../../../../../build/QtCreator/rete.pri)
include(../../../../QtCreator/rete.pri)
include(../../rete.pri)
include(../../../../QtCreator/app/winsock/winsock.pri)

TARGET = $${winsock_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${winsock_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${winsock_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${winsock_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${winsock_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${winsock_HEADERS} \
$${OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${winsock_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${winsock_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${winsock_LIBS} \
$${FRAMEWORKS} \


