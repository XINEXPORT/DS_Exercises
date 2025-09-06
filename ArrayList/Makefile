# Compiler and flags
CXX = clang++
CXXFLAGS = -g -std=c++11 -Wall -Wextra

# Target executable
TARGET = testIntArrayList

# Object files
OBJS = IntArrayList.o testIntArrayList.o

# Default rule: build the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

# Compile each .cpp into .o
IntArrayList.o: IntArrayList.cpp IntArrayList.h
	$(CXX) $(CXXFLAGS) -c IntArrayList.cpp -o IntArrayList.o

testIntArrayList.o: testIntArrayList.cpp IntArrayList.h
	$(CXX) $(CXXFLAGS) -c testIntArrayList.cpp -o testIntArrayList.o

# Clean up compiled files
clean:
	rm -f $(OBJS) $(TARGET) *~
