run: main.o
	g++ -o run main.o

main.o: main.cpp permutations.hpp fibonacci.hpp
	g++ -c main.cpp

clean:
	rm -f *.o