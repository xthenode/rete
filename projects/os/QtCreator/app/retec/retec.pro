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
#   File: retec.pro
#
# Author: $author$
#   Date: 9/9/2020
#
# QtCreator .pro file for rete executable retec
########################################################################
include(../../../../../build/QtCreator/rete.pri)
include(../../../../QtCreator/rete.pri)
include(../../rete.pri)
include(../../../../QtCreator/app/retec/retec.pri)

TARGET = $${retec_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${retec_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${retec_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${retec_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${retec_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${retec_HEADERS} \
$${OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${retec_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${retec_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${retec_LIBS} \
$${FRAMEWORKS} \


