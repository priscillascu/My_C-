#include <iostream>
#include "mylist.hpp"

using namespace std;

void BubbleSort1(MyList *L1)   //第一种冒泡排序，时间复杂度为o(n^2)
{
	for(int i = 0; i < L1->length - 1; i++)
	{
		for(int j = 0; j < L1->length - 1; j++)
		{
			if(L1->data[j] > L1->data[j+1])   //该算法会重复length-1次遍历，需要改进
				MySwap(L1, j, j+1);
			else
				continue;
		}
	}
}

void BubbleSort2(MyList *L1)   //改进后的冒泡排序，当没有交换发生时，结束程序
{
	bool flag = true;            //通过设置标志位来判断是否有交换发生，可以节省很多次从头遍历
	for(int i = 0; i < L1->length - 1 && flag; i++)  //时间复杂度仍为O(N^2)
	{
		flag = false;
		for(int j = 0; j < L1->length - 1; j++)
		{
			cout << "内部比较第" << j+1 << "次" << endl;
			if(L1->data[j] > L1->data[j+1])   
			{
				MySwap(L1, j, j+1);
				flag = true;
			}
			else
			{
				continue;
			}	
		}
		cout << "从头遍历第" << i+1 << "次" << endl;
	}	
}