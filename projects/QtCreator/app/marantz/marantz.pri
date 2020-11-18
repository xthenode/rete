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
#   File: marantz.pri
#
# Author: $author$
#   Date: 11/16/2020
#
# QtCreator .pri file for rete executable marantz
########################################################################

########################################################################
# marantz

# marantz TARGET
#
marantz_TARGET = marantz

# marantz INCLUDEPATH
#
marantz_INCLUDEPATH += \
$${rete_INCLUDEPATH} \

# marantz DEFINES
#
marantz_DEFINES += \
$${rete_DEFINES} \
LOGGING_LEVELS_DEFAULT=LOGGING_LEVELS_ERROR \
XOS_APP_CONSOLE_MARANTZ_CLIENT_MAIN_INSTANCE \

########################################################################
# marantz OBJECTIVE_HEADERS
#
#marantz_OBJECTIVE_HEADERS += \
#$${RETE_SRC}/rete/base/Base.hh \

# marantz OBJECTIVE_SOURCES
#
#marantz_OBJECTIVE_SOURCES += \
#$${RETE_SRC}/rete/base/Base.mm \

########################################################################
# marantz HEADERS
#
marantz_HEADERS += \
$${NADIR_SRC}/xos/base/string.hpp \
\
$${RETE_SRC}/xos/app/console/marantz/client/main_opt.hpp \
$${RETE_SRC}/xos/app/console/marantz/client/main.hpp \
\
$${NADIR_SRC}/xos/console/main_main.hpp \

# marantz SOURCES
#
marantz_SOURCES += \
$${NADIR_SRC}/xos/base/string.cpp \
\
$${RETE_SRC}/xos/app/console/marantz/client/main_opt.cpp \
$${RETE_SRC}/xos/app/console/marantz/client/main.cpp \
\
$${NADIR_SRC}/xos/console/main_main.cpp \

########################################################################
# marantz FRAMEWORKS
#
marantz_FRAMEWORKS += \
$${rete_FRAMEWORKS} \

# marantz LIBS
#
marantz_LIBS += \
$${rete_LIBS} \


