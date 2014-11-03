OBJS = main.o conway.o cell.o png.o rgbapixel.o animation.o
EXENAME = cgol

CXX = clang++
CXXFLAGS = -std=c++1y -stdlib=libc++ -c -g -O0 -Wall -Wextra -pedantic
LD = clang++
LDFLAGS = -std=c++1y -stdlib=libc++ -lpng -lc++abi

all : $(EXENAME)

$(EXENAME) : $(OBJS)
	$(LD) $(OBJS) $(LDFLAGS) -o $(EXENAME)

main.o : main.cpp conway.o
	$(CXX) $(CXXFLAGS) main.cpp

conway.o : conway.h conway.cpp cell.h rgbapixel.h animation.h png.h
	$(CXX) $(CXXFLAGS) conway.cpp

cell.o : cell.h cell.cpp rgbapixel.h
	$(CXX) $(CXXFLAGS) cell.cpp

png.o: png.h png.cpp rgbapixel.h
	$(CXX) $(CXXFLAGS) png.cpp

rgbapixel.o: rgbapixel.h rgbapixel.cpp
	$(CXX) $(CXXFLAGS) rgbapixel.cpp

animation.o: animation.cpp animation.h png.h rgbapixel.h
	$(CXX) $(CXXFLAGS) animation.cpp
	
clean : 
	rm -f *.o $(EXENAME)
