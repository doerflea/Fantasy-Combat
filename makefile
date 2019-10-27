1;95;0cCXX = g++ 
CXXFLAGS = -std=c++0
CXXFLAGS = -Wall -g
CXXFLAGS += -pedantic-errors

OBJS = menu.o input_validation.o Character.o Vampire.o Barbarian.o BlueMen.o Medusa.o HarryPotter.o

SRCS = menu.cpp input_validation.cpp Character.cpp Vampire.cpp Barbarian.cpp BlueMen.cpp Medusa.cpp HarryPotter.cpp

HEADERS = menu.hpp input_validation.hpp Character.hpp Vampire.hpp Barbarian.hpp BlueMen.hpp Medusa.hpp HarryPotter.hpp

Project3: ${OBJS} ${HEADERS}
	${CXX} ${LDFLAGS} ${OBJS} -o Project3
.PHONY: clean
clean:
	-rm ${OBJS}
