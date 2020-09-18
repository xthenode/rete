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
#   File: network.pro
#
# Author: $author$
#   Date: 9/9/2020
#
# QtCreator .pro file for rete executable network
########################################################################
include(../../../../../build/QtCreator/rete.pri)
include(../../../../QtCreator/rete.pri)
include(../../rete.pri)
include(../../../../QtCreator/app/network/network.pri)

TARGET = $${network_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${network_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${network_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${network_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${network_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${network_HEADERS} \
$${OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${network_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${network_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${network_LIBS} \
$${FRAMEWORKS} \


