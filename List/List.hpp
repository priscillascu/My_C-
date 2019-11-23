#include <iostream>
#define MAXSIZE 20  //定义线性表最大长度

using namespace std;

struct List
{
	int data[MAXSIZE];
	int length;
};

void ListInsert(List &list, int insert_num, int pos);
void ListDelete(List &list, int pos);

void ListInsert(List &list, int insert_num, int pos)  //采用&引用，直接改变list值
{
	if(list.length == MAXSIZE)
	{
		cout << "线性表已满" << endl;
		//return 0;
	}
	else if(pos < 0 || pos > list.length)
	{
		cout << "插入位置错误" << endl;
		//return 0;
	}
	else if(pos <= list.length)  //在表内或者表尾插入
	{
		for(int i = list.length; i >= pos; i--)
		{
			list.data[i] = list.data[i-1];   //数据后移
		}
		list.data[pos] = insert_num;
		list.length = list.length + 1;
		cout << "替换后为：" << list.data[pos] << endl;
	}
}

void ListDelete(List &list, int pos)  //采用&引用，直接改变list值
{
	if(pos < 0 || pos > list.length)
	{
		cout << "删除位置错误" << endl;
		//return 0;
	}
	else if(pos <= list.length)
	{
		for(int i = pos; i < list.length; i++)
		{
			list.data[i] = list.data[i+1];
		}
		list.length = list.length-1;
	}
}


