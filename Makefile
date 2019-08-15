CXX_FLAGS = -I"./AddCUDA"
LINK_FLAGS = -L"./x64/Release"

OBJECTS = mingw.o

all: cudaMinGWC

cudaMinGWC: $(OBJECTS)
	g++ $(CXX_FLAGS) $(LINK_FLAGS) $(OBJECTS)  -o cudaMinGWC -lAddCUDA

mingw.o: mingw.cpp
	g++ $(CXX_FLAGS) -c mingw.cpp

clean: 
	rm *.o *.exe