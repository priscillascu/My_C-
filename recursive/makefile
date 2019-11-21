my_recursive: my_recursive.o
	g++ -o my_recursive my_recursive.o

my_recursive.o: my_recursive.cpp factorial.hpp sum.hpp
	g++ -c my_recursive.cpp

clean:
	rm -f *.o