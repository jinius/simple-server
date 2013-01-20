-include ../Makefile.common

################################################################
# Local Config
################################################################
INCLUDE += -I./include -I../Framework/include

OS := $(shell uname)

################################################################
# Target Section
################################################################
.PHONY : all clean
all : debug
debug : MockClientChannelServerD
release : MockClientChannelServer

ifeq ($(OS), Linux)
DEBUG_LIBS := -pthread -L../Framework -lFrameworkD
RELEASE_LIBS := -pthread -L../Framework -lFramework
endif

ifeq ($(OS), Darwin)
DEBUG_LIBS := -lFrameworkD -L../Framework
RELEASE_LIBS := -lFramework -L../Framework
endif

MockClientChannelServerD : $(DEBUG_OBJECTS)
	@$(CXX) $(CXXFLAGS) -O0 -g -o $@ $^ $(DEBUG_LIBS)

MockClientChannelServer : $(RELEASE_OBJECTS)
	@$(CXX) $(CXXFLAGS) -O3 -o $@ $^ $(RELEASE_LIBS)

clean :
	-$(RM) MockClientChannelServerD MockClientChannelServer
	-$(RM) $(shell find src -name '*.o')
	-$(RM) $(shell find src -name '*.gcno')
	-$(RM) $(shell find src -name '*.gcda')
	-$(RM) $(shell find src -name '*.d')

-include $(DEPS)

