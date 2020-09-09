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
#   File: reted.pri
#
# Author: $author$
#   Date: 9/8/2020
#
# QtCreator .pri file for rete executable reted
########################################################################

########################################################################
# reted

# reted TARGET
#
reted_TARGET = reted

# reted INCLUDEPATH
#
reted_INCLUDEPATH += \
$${rete_INCLUDEPATH} \

# reted DEFINES
#
reted_DEFINES += \
$${rete_DEFINES} \

########################################################################
# reted OBJECTIVE_HEADERS
#
#reted_OBJECTIVE_HEADERS += \
#$${RETE_SRC}/rete/base/Base.hh \

# reted OBJECTIVE_SOURCES
#
#reted_OBJECTIVE_SOURCES += \
#$${RETE_SRC}/rete/base/Base.mm \

########################################################################
# reted HEADERS
#
reted_HEADERS += \
$${RETE_SRC}/xos/app/console/rete/server/main_opt.hpp \
$${RETE_SRC}/xos/app/console/rete/server/main.hpp \
\
$${NADIR_SRC}/xos/console/main_main.hpp \

# reted SOURCES
#
reted_SOURCES += \
$${RETE_SRC}/xos/app/console/rete/server/main_opt.cpp \
$${RETE_SRC}/xos/app/console/rete/server/main.cpp \
\
$${NADIR_SRC}/xos/console/main_main.cpp \

########################################################################
# reted FRAMEWORKS
#
reted_FRAMEWORKS += \
$${rete_FRAMEWORKS} \

# reted LIBS
#
reted_LIBS += \
$${rete_LIBS} \


