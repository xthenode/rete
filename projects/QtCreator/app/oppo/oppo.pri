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
#   File: oppo.pri
#
# Author: $author$
#   Date: 11/17/2020
#
# QtCreator .pri file for rete executable oppo
########################################################################

########################################################################
# oppo

# oppo TARGET
#
oppo_TARGET = oppo

# oppo INCLUDEPATH
#
oppo_INCLUDEPATH += \
$${rete_INCLUDEPATH} \

# oppo DEFINES
#
oppo_DEFINES += \
$${rete_DEFINES} \
LOGGING_LEVELS_DEFAULT=LOGGING_LEVELS_ERROR \
XOS_APP_CONSOLE_OPPO_CLIENT_MAIN_INSTANCE \

########################################################################
# oppo OBJECTIVE_HEADERS
#
#oppo_OBJECTIVE_HEADERS += \
#$${RETE_SRC}/rete/base/Base.hh \

# oppo OBJECTIVE_SOURCES
#
#oppo_OBJECTIVE_SOURCES += \
#$${RETE_SRC}/rete/base/Base.mm \

########################################################################
# oppo HEADERS
#
oppo_HEADERS += \
$${RETE_SRC}/xos/app/console/oppo/client/main_opt.hpp \
$${RETE_SRC}/xos/app/console/oppo/client/main.hpp \
\
$${NADIR_SRC}/xos/console/main_main.hpp \

# oppo SOURCES
#
oppo_SOURCES += \
$${RETE_SRC}/xos/app/console/oppo/client/main_opt.cpp \
$${RETE_SRC}/xos/app/console/oppo/client/main.cpp \
\
$${NADIR_SRC}/xos/console/main_main.cpp \

########################################################################
# oppo FRAMEWORKS
#
oppo_FRAMEWORKS += \
$${rete_FRAMEWORKS} \

# oppo LIBS
#
oppo_LIBS += \
$${rete_LIBS} \


