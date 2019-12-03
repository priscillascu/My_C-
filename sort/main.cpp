#include "bubble_sort.hpp"

int main(int argc, char const *argv[])
{
	cout << "argc = " << argc << endl;
	cout << "argv[0] = " << argv[0] << endl;  //argv[0]存放了可执行程序的位置, argv[]有argc个，,argc默认为1；argc程序时传递给main()函数的命令行参数个数
	int data[] = {2, 1, 4, 3, 5, 0, 3, 1, 9, 8, 1, 1, 1};
	MyList *L1 = new MyList;
	for(int i = 0; i < 13; i++)
	{
		L1->data[i] = data[i];
		L1->length++;
	}
	MySwap(L1, 3, 4);
	ShowList(L1);
	BubbleSort2(L1);
	ShowList(L1);
	return 0;
}
