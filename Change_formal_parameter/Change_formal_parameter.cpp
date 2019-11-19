#include <iostream>
using namespace std;

void swap_1(int x, int y);
void swap_2(int& x, int& y);
//传值函数执行完后要复制实参给形参，然后通过析构函数释放实参
//引用函数不需要复制实参，速度更快
//使用g++编译

int main()
{
	int a = 1;
	int b = 2;
	swap_1(a, b);
	cout << "形参改变，实参没改变" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	swap_2(a, b);
	cout << "形参改变，实参改变" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}
void swap_1(int x, int y)
{
	int temp = x;
	x = y;
	y = temp;
	cout << "传值函数中的形参值：" << endl;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
}

void swap_2(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
	cout << "引用函数中的形参值：" << endl;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
}