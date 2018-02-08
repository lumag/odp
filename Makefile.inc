ODP_INCLUDES = \
	-I$(abs_top_builddir)/include \
	-I$(abs_top_srcdir)/include

if ODP_ABI_COMPAT
ODP_INCLUDES += \
	-I$(abs_top_srcdir)/include/odp/arch/@ARCH_ABI@
else
ODP_INCLUDES += \
	-I$(abs_top_srcdir)/platform/@with_platform@/include \
	-I$(abs_top_srcdir)/platform/@with_platform@/arch/@ARCH_DIR@ \
	-I$(abs_top_srcdir)/platform/@with_platform@/include-abi
endif

HELPER_INCLUDES = \
	-I$(abs_top_srcdir)/helper/include

LIB   = $(top_builddir)/lib
