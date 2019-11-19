#include <iostream>
using namespace std;

double devide(double x, double y);

int main()
{
	double a = 4;
	double b = 0;
	double result = 0;
	cout << "请输入除数：" << endl;
	cin >> b;
	try
	{
		result = devide(a, b);
	}
	catch(...)
	{
		cout << "除数不能为0！" << endl;
		return 0;
	}
	cout << result << endl;
	return 0;
}
double devide(double x, double y)
{
	if(y == 0)
	{
		throw "除数不能为0！";
		return 0;
	}
	else
	{
		double result = x/y;
		return result;
	}
}