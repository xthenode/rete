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
#   File: retec.pri
#
# Author: $author$
#   Date: 9/9/2020
#
# QtCreator .pri file for rete executable retec
########################################################################

########################################################################
# retec

# retec TARGET
#
retec_TARGET = retec

# retec INCLUDEPATH
#
retec_INCLUDEPATH += \
$${rete_INCLUDEPATH} \

# retec DEFINES
#
retec_DEFINES += \
$${rete_DEFINES} \

########################################################################
# retec OBJECTIVE_HEADERS
#
#retec_OBJECTIVE_HEADERS += \
#$${RETE_SRC}/rete/base/Base.hh \

# retec OBJECTIVE_SOURCES
#
#retec_OBJECTIVE_SOURCES += \
#$${RETE_SRC}/rete/base/Base.mm \

########################################################################
# retec HEADERS
#
retec_HEADERS += \
$${RETE_SRC}/xos/app/console/rete/client/main_opt.hpp \
$${RETE_SRC}/xos/app/console/rete/client/main.hpp \
\
$${NADIR_SRC}/xos/console/main_main.cpp \

# retec SOURCES
#
retec_SOURCES += \
$${RETE_SRC}/xos/app/console/rete/client/main_opt.cpp \
$${RETE_SRC}/xos/app/console/rete/client/main.cpp \
\
$${NADIR_SRC}/xos/console/main_main.cpp \

########################################################################
# retec FRAMEWORKS
#
retec_FRAMEWORKS += \
$${rete_FRAMEWORKS} \

# retec LIBS
#
retec_LIBS += \
$${rete_LIBS} \


