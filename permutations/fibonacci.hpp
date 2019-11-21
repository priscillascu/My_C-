#include <iostream>
using namespace std;

int f0 = 0;
int f1 = 1;

int fibonacci(int n)  //定义第n个斐波那契数列的数
{
	int res = 0;
	if(n < 2)
		return n;
	else if(n == 2)
	{
		res = f0 + f1;
	}
	else
	{
		res = fibonacci(n - 1) + fibonacci(n - 2);	
	}
	return res;	
}