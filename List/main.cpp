#include <iostream>
#include "List.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
	List my_list1;
	my_list1.length = 10;

	for (int i = 0; i < my_list1.length; i++)
	{
		my_list1.data[i] = i;
	}

	cout << "插入前的线性表为：" << endl;
	for (int i = 0; i < my_list1.length; i++)
	{
		cout << my_list1.data[i] << endl;
	}
	cout << "共" << my_list1.length << "个元素" << endl;

	ListInsert(my_list1, 1000, 9);
	cout << "插入后的线性表为：" << endl;
	for (int i = 0; i < my_list1.length; i++)
	{
		cout << my_list1.data[i] << endl;
	}
	cout << "共" << my_list1.length << "个元素" << endl;

	ListDelete(my_list1, 3);
	cout << "删除后的线性表为：" << endl;
	for (int i = 0; i < my_list1.length; i++)
	{
		cout << my_list1.data[i] << endl;
	}
	cout << "共" << my_list1.length << "个元素" << endl;

	return 0;
}