SRC=Rectangle.cpp Cercle.cpp Groupe.cpp Forme.cpp Point.cpp 

#SRC=$(wildcard *.cpp)  
EXE=main

CXX=g++-8
CXXFLAGS+= -Wall -Wextra -MMD -g -O2 -fdiagnostics-color=auto -lstdc++
LDFLAGS= #-lSDL

OBJ=$(addprefix build/,$(SRC:.cpp=.o))
DEP=$(addprefix build/,$(SRC:.cpp=.d))

main:	$(OBJ) main.o 
	$(CXX) -o $(EXE) $^ $(LDFLAGS)

test:	$(OBJ) main_catch.o tests_catch.o
	$(CXX) -o EXETEST $^ $(LDFLAGS)

build/%.o: %.cpp
	@mkdir -p build
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	rm -rf build core *.gch

-include $(DEP)
