#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int *y = nullptr;  //声明一个整数指针变量
	int *a = nullptr;
	int **x = nullptr;
	int cols_num = 3;
	int rows_num = 3;

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

	x = new int *[cols_num];   //使用new定义二维数组
	for(int i = 0; i < rows_num; i++)
	{
		x[i] = new int[cols_num];
	}
	cout << x[2][2] << endl;

	for(int i = 0; i < rows_num; i++)
	{
		for(int j = 0; j < cols_num; j++)
		{
			x[i][j] = 1;
		}
	}
	cout << x[2][2] << endl;

	for(int i = 0; i < rows_num; i++)   //释放二维数组空间
	{
		delete []x[i];
	}
	delete []x;
	return 0;
}
