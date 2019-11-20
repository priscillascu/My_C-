#include <iostream>
using namespace std;

void make2dArray(int * &x, int rows_num, int cols_num);

int *y;  //声明一个整数指针变量
int *a;
int *x;

int main(int argc, char const *argv[])
{
	y = new int(10);   //使用new分配一个新的能够存储一个整数的空间，并赋值10
	cout << "空间赋值后为：" << *y << endl;

	a = new int[*y];  //使用new可以创建可变大小的数组，分配了可变大小个的整形空间，并返回第一个空间的指针
	for(int i = 0; i < *y; i++)
	{
		a[i] = i;
		cout << a[i] << endl;
	}

	delete y;
	delete []a;   //释放空间，数组要把[]提前
	cout << "空间释放后y为: " << *y << endl;   //释放后y=0

	make2dArray(x, 3, 3);
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			cout << x[i][j];
		}
	}
	return 0;
}

void make2dArray(int * &x, int rows_num, int cols_num)
{
	x = new int(rows_num);
	for(int i = 0; i < rows_num; i++)
	{
		x[i] = new int(rows_num);
	}
}