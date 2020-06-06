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
#   File: uuid.pri
#
# Author: $author$
#   Date: 5/4/2020
#
# QtCreator .pri file for rete executable uuid
########################################################################

########################################################################
# uuid

# uuid TARGET
#
uuid_TARGET = uuid

# uuid INCLUDEPATH
#
uuid_INCLUDEPATH += \
$${rete_INCLUDEPATH} \

# uuid DEFINES
#
uuid_DEFINES += \
$${rete_DEFINES} \

########################################################################
# uuid OBJECTIVE_HEADERS
#
#uuid_OBJECTIVE_HEADERS += \
#$${RETE_SRC}/rete/base/Base.hh \

# uuid OBJECTIVE_SOURCES
#
#uuid_OBJECTIVE_SOURCES += \
#$${RETE_SRC}/rete/base/Base.mm \

########################################################################
# uuid HEADERS
#
uuid_HEADERS += \
$${NADIR_SRC}/xos/io/string/writer.hpp \
\
$${RETE_SRC}/xos/network/universal/unique/actual/identifier.hpp \
$${RETE_SRC}/xos/network/universal/unique/identifier.hpp \
$${RETE_SRC}/xos/network/universal/unique/posix/identifier.hpp \
$${RETE_SRC}/xos/network/universal/unique/os/identifier.hpp \
\
$${RETE_SRC}/xos/app/console/uuid/main_opt.hpp \
$${RETE_SRC}/xos/app/console/uuid/main.hpp \
\
$${NADIR_SRC}/xos/console/main_main.hpp \

# uuid SOURCES
#
uuid_SOURCES += \
$${NADIR_SRC}/xos/io/string/writer.cpp \
\
$${RETE_SRC}/xos/network/universal/unique/os/identifier.cpp \
\
$${RETE_SRC}/xos/app/console/uuid/main_opt.cpp \
$${RETE_SRC}/xos/app/console/uuid/main.cpp \
\
$${NADIR_SRC}/xos/console/main_main.cpp \

########################################################################
# uuid FRAMEWORKS
#
uuid_FRAMEWORKS += \
$${rete_FRAMEWORKS} \

# uuid LIBS
#
uuid_LIBS += \
$${rete_LIBS} \


