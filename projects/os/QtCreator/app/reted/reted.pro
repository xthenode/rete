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
#   File: reted.pro
#
# Author: $author$
#   Date: 9/8/2020
#
# QtCreator .pro file for rete executable reted
########################################################################
include(../../../../../build/QtCreator/rete.pri)
include(../../../../QtCreator/rete.pri)
include(../../rete.pri)
include(../../../../QtCreator/app/reted/reted.pri)

TARGET = $${reted_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${reted_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${reted_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${reted_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${reted_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${reted_HEADERS} \
$${OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${reted_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${reted_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${reted_LIBS} \
$${FRAMEWORKS} \


