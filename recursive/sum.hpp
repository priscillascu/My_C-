template <class T>
T sum(T a[], int n);  //模板函数声明

template <class T>
T sum(T a[], int n)  //模板函数递归求和
{
	if(n > 0)
	{
		return sum(a, n - 1) + a[n-1];
	}
	return 0;
}