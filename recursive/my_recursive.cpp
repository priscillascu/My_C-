#include <iostream>
#include "sum.hpp"
#include "factorial.hpp"
using namespace std;

int main(int argc, char const *argv[])
{
	int n1 = 1;
	int n2 = 10;
	int res1 = 0;
	int res2 = 0;
	double sumofa = 0;
	double a[] = {1.1, 1.2, 1.3};

	res1 = factorial(n1);
	res2 = factorial(n2);

	sumofa = sum(a, 3);
	cout << res1 << endl;
	cout << res2 << endl;
	cout << sumofa << endl;
	return 0;
}

