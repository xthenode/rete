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
#   File: Makefile
#
# Author: $author$
#   Date: 3/26/2020
#
# generic Gcc Makefile for rete Executable rete
########################################################################


#
# target
#
rete_exe_EXETARGET = rete

########################################################################

#
# user c++ flags
#
rete_exe_USRCXXFLAGS += \
${rete_USRCXXFLAGS} \

#
# user defines
#
rete_exe_USRDEFINES += \
${rete_USRDEFINES} \

#
# user includes
#
rete_exe_USRINCLUDES += \
${rete_USRINCLUDES} \

#
# user libdirs
#
rete_exe_USRLIBDIRS += \
${rete_USRLIBDIRS} \

########################################################################

#
# Executable .c sources
#
#rete_exe_EXE_C_SOURCES += \
#${RETE_SRC}/rete/base/Base.c \

#
# Executable .cc sources
#
#rete_exe_EXE_CC_SOURCES += \
#${RETE_SRC}/rete/base/Base.cc \

#
# Executable .cxx sources
#
#rete_exe_EXE_CXX_SOURCES += \
#${RETE_SRC}/rete/base/Base.cxx \

#
# Executable .cpp sources
#
rete_exe_EXE_CPP_SOURCES += \
${NADIR_SRC}/xos/base/opened.cpp \
\
${RETE_SRC}/xos/network/addresses.cpp \
${RETE_SRC}/xos/network/transports.cpp \
${RETE_SRC}/xos/network/endpoints.cpp \
${RETE_SRC}/xos/network/sockets/reader.cpp \
${RETE_SRC}/xos/network/sockets/writer.cpp \
${RETE_SRC}/xos/network/sockets/os/os.cpp \
${RETE_SRC}/xos/network/sockets/os/interface.cpp \
\
${RETE_SRC}/xos/app/console/rete/main_opt.cpp \
${RETE_SRC}/xos/app/console/rete/main.cpp \
${NADIR_SRC}/xos/console/main_main.cpp \

#
# Executable .m sources
#
#rete_exe_EXE_M_SOURCES += \
#${RETE_SRC}/rete/base/Base.m \

#
# Executable .mm sources
#
#rete_exe_EXE_MM_SOURCES += \
#${RETE_SRC}/rete/base/Base.mm \


########################################################################

#
# Executable libraries
#
rete_exe_LIBS += \
${rete_LIBS}



