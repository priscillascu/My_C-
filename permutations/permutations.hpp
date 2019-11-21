#include <iostream>
using namespace std;

template <class T>
void permutations(T list[], int k, int m)  //将list中的[k:m]元素进行排列组合
{
	if(k == m)
	{
		cout << list << endl;
	}
	else
	{
		for(int i = k; i <= m; i++)
		{
			swap(list[k], list[i]);
			permutations(list, k + 1, m);
			swap(list[k], list[i]);
		}
	}
}