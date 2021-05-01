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
#   File: marantzd.pri
#
# Author: $author$
#   Date: 4/27/2021
#
# QtCreator .pri file for rete executable marantzd
########################################################################

########################################################################
# marantzd

# marantzd TARGET
#
marantzd_TARGET = marantzd

# marantzd INCLUDEPATH
#
marantzd_INCLUDEPATH += \
$${rete_INCLUDEPATH} \

# marantzd DEFINES
#
marantzd_DEFINES += \
$${rete_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_APP_CONSOLE_MARANTZ_SERVER_MAIN_INSTANCE \

########################################################################
# marantzd OBJECTIVE_HEADERS
#
#marantzd_OBJECTIVE_HEADERS += \
#$${RETE_SRC}/xos/app/console/marantzd/main.hh \

# marantzd OBJECTIVE_SOURCES
#
#marantzd_OBJECTIVE_SOURCES += \
#$${RETE_SRC}/xos/app/console/marantzd/main.mm \

########################################################################
# marantzd HEADERS
#
marantzd_HEADERS += \
$${RETE_SRC}/xos/app/console/marantz/base/main_opt.hpp \
$${RETE_SRC}/xos/app/console/marantz/base/main.hpp \
$${RETE_SRC}/xos/app/console/marantz/server/main_opt.hpp \
$${RETE_SRC}/xos/app/console/marantz/server/main.hpp \
\
$${NADIR_SRC}/xos/console/main_main.hpp \

# marantzd SOURCES
#
marantzd_SOURCES += \
$${RETE_SRC}/xos/app/console/marantz/server/main_opt.cpp \
$${RETE_SRC}/xos/app/console/marantz/server/main.cpp \
\
$${NADIR_SRC}/xos/console/main_main.cpp \

########################################################################
# marantzd FRAMEWORKS
#
marantzd_FRAMEWORKS += \
$${rete_FRAMEWORKS} \

# marantzd LIBS
#
marantzd_LIBS += \
$${rete_LIBS} \


