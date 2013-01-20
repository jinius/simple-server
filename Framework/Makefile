-include ../Makefile.common

################################################################
# Local Config
################################################################
INCLUDE += -I./include

################################################################
# Target Section
################################################################
.PHONY : all clean
all : debug
debug : libFrameworkD.a
release : libFramework.a

libFrameworkD.a : $(DEBUG_OBJECTS)
	@$(AR) $(ARFLAGS) $@ $^

libFramework.a : $(RELEASE_OBJECTS)
	@$(AR) $(ARFLAGS) $@ $^

clean :
	-$(RM) libFrameworkD.a libFramework.a
	-$(RM) $(shell find src -name '*.o')
	-$(RM) $(shell find src -name '*.gcno')
	-$(RM) $(shell find src -name '*.gcda')
	-$(RM) $(shell find src -name '*.d')

-include $(DEPS)

