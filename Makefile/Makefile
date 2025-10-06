CXX = clang++
CXXFLAGS = -g -Wall -Wextra
LDFLAGS = -g

final_prog: Point.o Rectangle.o main.o
	${CXX} ${LDFLAGS} -o $@ $^

Point.o: Point.cpp Point.h

Rectangle.o: Rectangle.cpp Rectangle.h Point.h

main.o: main.cpp Point.h Rectangle.h

unit_test: unit_test_driver.o unit_test.o
	${CXX} $^

format:
	clang-format -i *.cpp *.h
	@echo "Formatting Complete👌"

clean:
	rm -f final_prog *.o *~