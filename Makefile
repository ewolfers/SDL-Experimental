CXX=g++
RM=rm -f
XNAME=Test.exe
XDIR=bin/
SDIR=src/
IDIR=include/
LDIR=lib/
ODIR=obj/
_OBJS=Driver.o Window.o Error.o
LDLIBS=-lmingw32 -lSDL2main -lSDL2

VPATH=$(SDIR)
XPATH=$(XDIR)$(XNAME)
OPATH=$(SDIR)$(ODIR)
CXXFLAGS=-O2 -I $(IDIR)
LDFLAGS=-L $(LDIR)
OBJS=$(patsubst %,$(OPATH)%,$(_OBJS))

Test: $(_OBJS)
	$(CXX) -o $(XPATH) $(OBJS) $(CXXFLAGS) $(LDFLAGS) $(LDLIBS)
	
Driver.o: $(IDIR)Driver.h
	$(CXX) -o $(OPATH)$@ $(SDIR)Driver.cpp -c $(CXXFLAGS)
	
Window.o: $(IDIR)Window.h
	$(CXX) -o $(OPATH)$@ $(SDIR)Window.cpp -c $(CXXFLAGS)
	
Error.o: $(IDIR)Error.h
	$(CXX) -o $(OPATH)$@ $(SDIR)Error.cpp -c $(CXXFLAGS)

.PHONY: clean
clean:
	$(RM) $(XPATH) $(OPATH)*.o