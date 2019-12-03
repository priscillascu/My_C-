#include <iostream>
#include "bubble_sort.hpp"
#include "simple_selection_sort.hpp"
#include "mylist.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
	cout << "argc = " << argc << endl;
	cout << "argv[0] = " << argv[0] << endl;  //argv[0]存放了可执行程序的位置, argv[]有argc个，,argc默认为1；argc程序时传递给main()函数的命令行参数个数
	int data[] = {2, 1, 4, 3, 5, 0, 3, 1, 9, 8, 1, 1, 1};
	int method = 0;

	MyList *L1 = new MyList;
	for(int i = 0; i < 13; i++)
	{
		L1->data[i] = data[i];
		L1->length++;
	}
	cout << "初始列表为：" << endl;
	ShowList(L1);
	cout << "请选择排序算法: "<< endl;
	cout << "0：冒泡，1：简单选择" << endl;
	cin >> method;
	
	switch(method)
	{
		case 0:
			BubbleSort2(L1);
			break;
		case 1:
			SimpleSelectionSort(L1);
			break;
		default:
			SimpleSelectionSort(L1);
	}

	cout << "排序后列表为：" << endl;
	ShowList(L1);
	return 0;
}
