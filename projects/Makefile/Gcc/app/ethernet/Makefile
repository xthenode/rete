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
#   Date: 5/8/2020
#
# generic Gcc Makefile for rete Executable ethernet
########################################################################


#
# target
#
ethernet_EXETARGET = ethernet

########################################################################

#
# user c++ flags
#
ethernet_USRCXXFLAGS += \
${rete_USRCXXFLAGS} \

#
# user defines
#
ethernet_USRDEFINES += \
${rete_USRDEFINES} \

#
# user includes
#
ethernet_USRINCLUDES += \
${rete_USRINCLUDES} \

#
# user libdirs
#
ethernet_USRLIBDIRS += \
${rete_USRLIBDIRS} \

########################################################################

#
# Executable .c sources
#
#ethernet_EXE_C_SOURCES += \
#${RETE_SRC}/rete/base/Base.c \

#
# Executable .cc sources
#
#ethernet_EXE_CC_SOURCES += \
#${RETE_SRC}/rete/base/Base.cc \

#
# Executable .cxx sources
#
#ethernet_EXE_CXX_SOURCES += \
#${RETE_SRC}/rete/base/Base.cxx \

#
# Executable .cpp sources
#
ethernet_EXE_CPP_SOURCES += \
${NADIR_SRC}/xos/base/chars.cpp \
${NADIR_SRC}/xos/base/string.cpp \
${NADIR_SRC}/xos/base/wrapped.cpp \
\
${RETE_SRC}/xos/network/ethernet/os/os.cpp \
${RETE_SRC}/xos/network/ethernet/os/address.cpp \
\
${RETE_SRC}/xos/app/console/ethernet/main_opt.cpp \
${RETE_SRC}/xos/app/console/ethernet/main.cpp \
\
${NADIR_SRC}/xos/console/main_main.cpp \

#
# Executable .m sources
#
#ethernet_EXE_M_SOURCES += \
#${RETE_SRC}/rete/base/Base.m \

#
# Executable .mm sources
#
#ethernet_EXE_MM_SOURCES += \
#${RETE_SRC}/rete/base/Base.mm \


########################################################################

#
# Executable libraries
#
ethernet_LIBS += \
${rete_LIBS}



