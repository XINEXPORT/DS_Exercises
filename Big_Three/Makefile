# Makefile
CXX = clang++
CXXFLAGS = -g -std=c++11 -Wall -Wextra

#target exe
TARGET = unit_tests

#objects
OBJS = Num.o unit_tests.o

#default rule: build the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

#Compile each .cpp into .o
Num.o: Num.cpp Num.h
	${CXX} ${CXXFLAGS} -c Num.cpp -o Num.o

unit_tests.o: unit_tests.cpp Num.h
	${CXX} ${CXXFLAGS} -c unit_tests.cpp -o unit_tests.o

#Clean up compiled files
clean:
	rm -f $(OBJS) $(TARGET) *~