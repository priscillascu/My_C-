int factorial(int n);

int factorial(int n)  //递归求解阶乘
{
	if(n <= 1)
		return 1;
	else
		return n*factorial(n - 1);
}
