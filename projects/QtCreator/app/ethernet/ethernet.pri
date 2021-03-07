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
#   File: ethernet.pri
#
# Author: $author$
#   Date: 5/3/2020
#
# QtCreator .pri file for rete executable ethernet
########################################################################

########################################################################
# ethernet

# ethernet TARGET
#
ethernet_TARGET = ethernet

# ethernet INCLUDEPATH
#
ethernet_INCLUDEPATH += \
$${rete_INCLUDEPATH} \

# ethernet DEFINES
#
ethernet_DEFINES += \
$${rete_DEFINES} \
LOGGING_LEVELS_DEFAULT=LOGGING_LEVELS_ERROR \
XOS_APP_CONSOLE_ETHERNET_MAIN_INSTANCE \

########################################################################
# ethernet OBJECTIVE_HEADERS
#
#ethernet_OBJECTIVE_HEADERS += \
#$${RETE_SRC}/rete/base/Base.hh \

# ethernet OBJECTIVE_SOURCES
#
#ethernet_OBJECTIVE_SOURCES += \
#$${RETE_SRC}/rete/base/Base.mm \

########################################################################
# ethernet HEADERS
#
ethernet_HEADERS += \
$${NADIR_SRC}/xos/base/chars.hpp \
$${NADIR_SRC}/xos/base/string.hpp \
$${NADIR_SRC}/xos/base/wrapped.hpp \
\
$${RETE_SRC}/xos/network/ethernet/actual/address.hpp \
$${RETE_SRC}/xos/network/ethernet/address.hpp \
$${RETE_SRC}/xos/network/ethernet/bsd/address.hpp \
$${RETE_SRC}/xos/network/ethernet/systemv/address.hpp \
$${RETE_SRC}/xos/network/ethernet/os/os.hpp \
$${RETE_SRC}/xos/network/ethernet/os/address.hpp \
\
$${RETE_SRC}/xos/app/console/ethernet/main_opt.hpp \
$${RETE_SRC}/xos/app/console/ethernet/main.hpp \
$${RETE_SRC}/xos/app/console/bsd/ethernet/main_opt.hpp \
$${RETE_SRC}/xos/app/console/bsd/ethernet/main.hpp \
$${RETE_SRC}/xos/app/console/systemv/ethernet/main_opt.hpp \
$${RETE_SRC}/xos/app/console/systemv/ethernet/main.hpp \
\
$${NADIR_SRC}/xos/app/console/main_opt.hpp \
$${NADIR_SRC}/xos/app/console/main.hpp \
$${NADIR_SRC}/xos/console/main_main.hpp \

# ethernet SOURCES
#
ethernet_SOURCES += \
$${NADIR_SRC}/xos/base/chars.cpp \
$${NADIR_SRC}/xos/base/string.cpp \
$${NADIR_SRC}/xos/base/wrapped.cpp \
\
$${RETE_SRC}/xos/network/ethernet/os/os.cpp \
$${RETE_SRC}/xos/network/ethernet/os/address.cpp \
\
$${RETE_SRC}/xos/app/console/ethernet/main_opt.cpp \
$${RETE_SRC}/xos/app/console/ethernet/main.cpp \
\
$${NADIR_SRC}/xos/console/main_main.cpp \

########################################################################
# ethernet FRAMEWORKS
#
ethernet_FRAMEWORKS += \
$${rete_FRAMEWORKS} \

# ethernet LIBS
#
ethernet_LIBS += \
$${rete_LIBS} \


