#include <iostream>
using namespace std;

#define MAXSIZE 100

struct MyList  //创建顺序表
{
	int data[MAXSIZE]; 
	int length = 0;  //顺序表的长度
};

void MySwap(MyList *L1, int i, int j)  //交换下标为i和j的元素
{
	int templt = L1->data[i];
	L1->data[i] = L1->data[j];
	L1->data[j] = templt;
}

void ShowList(MyList *L1)   //打印顺序表元素
{
	for(int i = 0; i < L1->length; i++)
	{
		cout << L1->data[i] << endl;
	}
	cout << "总长度为：" << L1->length << endl;
}