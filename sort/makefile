main: main.o
	g++ -o main main.o
main.o: main.cpp mylist.hpp bubble_sort.hpp simple_selection_sort.hpp
	g++ -g -c main.cpp
clean:
	rm -f *.o