CXX = clang++
CXXFLAGS = -g -Wall -Wextra
LDFLAGS = -g

final_prog: Point.o Rectangle.o main.o
	${CXX} ${LDFLAGS} -o final_prog Point.o Rectangle.o main.o

Point.o: Point.cpp Point.h
	${CXX} ${CXXFLAGS} -c Point.cpp

Rectangle.o: Rectangle.cpp Rectangle.h Point.h
	${CXX} ${CXXFLAGS} -c Rectangle.cpp

main.o: main.cpp Point.h Rectangle.h
	${CXX} ${CXXFLAGS} -c main.cpp
