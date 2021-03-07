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
#   File: socketb.pri
#
# Author: $author$
#   Date: 3/4/2021
#
# QtCreator .pri file for rete executable socketb
########################################################################

########################################################################
# socketb

# socketb TARGET
#
socketb_TARGET = socketb

# socketb INCLUDEPATH
#
socketb_INCLUDEPATH += \
$${rete_INCLUDEPATH} \

# socketb DEFINES
#
socketb_DEFINES += \
$${rete_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_APP_CONSOLE_NETWORK_SOCKETS_MAIN_INSTANCE \

########################################################################
# socketb OBJECTIVE_HEADERS
#
#socketb_OBJECTIVE_HEADERS += \
#$${RETE_SRC}/rete/base/Base.hh \

# socketb OBJECTIVE_SOURCES
#
#socketb_OBJECTIVE_SOURCES += \
#$${RETE_SRC}/rete/base/Base.mm \

########################################################################
# socketb HEADERS
#
socketb_HEADERS += \
$${RETE_SRC}/xos/app/console/network/base/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/base/main.hpp \
$${RETE_SRC}/xos/app/console/network/client/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/client/main.hpp \
$${RETE_SRC}/xos/app/console/network/server/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/server/main.hpp \
\
$${RETE_SRC}/xos/app/console/network/sockets/base/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/base/main.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/client/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/client/main.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/server/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/server/main.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/main_opt.hpp \
$${RETE_SRC}/xos/app/console/network/sockets/main.hpp \
\
$${RETE_SRC}/xos/app/console/os/sockets/base/main_opt.hpp \
$${RETE_SRC}/xos/app/console/os/sockets/base/main.hpp \
\
$${NADIR_SRC}/xos/console/main_main.hpp \

# socketb SOURCES
#
socketb_SOURCES += \
$${RETE_SRC}/xos/app/console/network/sockets/main_opt.cpp \
$${RETE_SRC}/xos/app/console/network/sockets/main.cpp \
\
$${NADIR_SRC}/xos/console/main_main.cpp \

########################################################################
# socketb FRAMEWORKS
#
socketb_FRAMEWORKS += \
$${rete_FRAMEWORKS} \

# socketb LIBS
#
socketb_LIBS += \
$${rete_LIBS} \


