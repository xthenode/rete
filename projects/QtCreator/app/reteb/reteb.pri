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
#   File: reteb.pri
#
# Author: $author$
#   Date: 9/19/2020
#
# QtCreator .pri file for rete executable reteb
########################################################################

########################################################################
# reteb

# reteb TARGET
#
reteb_TARGET = reteb

# reteb INCLUDEPATH
#
reteb_INCLUDEPATH += \
$${rete_INCLUDEPATH} \

# reteb DEFINES
#
reteb_DEFINES += \
$${rete_DEFINES} \
LOGGING_LEVELS_DEFAULT=LOGGING_LEVELS_ERROR \
XOS_APP_CONSOLE_RETE_BASE_MAIN_INSTANCE \

########################################################################
# reteb OBJECTIVE_HEADERS
#
#reteb_OBJECTIVE_HEADERS += \
#$${RETE_SRC}/rete/base/Base.hh \

# reteb OBJECTIVE_SOURCES
#
#reteb_OBJECTIVE_SOURCES += \
#$${RETE_SRC}/rete/base/Base.mm \

########################################################################
# reteb HEADERS
#
reteb_HEADERS += \
$${RETE_SRC}/xos/app/console/rete/base/main_opt.hpp \
$${RETE_SRC}/xos/app/console/rete/base/main.hpp \
\
$${NADIR_SRC}/xos/console/main_main.hpp \

# reteb SOURCES
#
reteb_SOURCES += \
$${RETE_SRC}/xos/app/console/rete/base/main_opt.cpp \
$${RETE_SRC}/xos/app/console/rete/base/main.cpp \
\
$${NADIR_SRC}/xos/console/main_main.cpp \

########################################################################
# reteb FRAMEWORKS
#
reteb_FRAMEWORKS += \
$${rete_FRAMEWORKS} \

# reteb LIBS
#
reteb_LIBS += \
$${rete_LIBS} \


