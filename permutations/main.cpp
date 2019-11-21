#include <iostream>
#include "permutations.hpp"
#include "fibonacci.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
	char list[] = "abcd";
	permutations(list, 0, 3);
	int res = fibonacci(4);
	cout << res << endl;
	return 0;
}