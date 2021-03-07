########################################################################
# Copyright (c) 1988-2021 $organization$
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
#   File: socketb.pro
#
# Author: $author$
#   Date: 3/4/2021
#
# QtCreator .pro file for rete executable socketb
########################################################################
include(../../../../../../build/QtCreator/rete.pri)
include(../../../../../build/QtCreator/rete.pri)
include(../../../../QtCreator/rete.pri)
include(../../rete.pri)
include(../../../../QtCreator/app/socketb/socketb.pri)

TARGET = $${socketb_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${socketb_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${socketb_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${socketb_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${socketb_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${socketb_HEADERS} \
$${socketb_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${socketb_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${socketb_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${socketb_LIBS} \
$${FRAMEWORKS} \


