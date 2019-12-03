#ifndef _SIMPLE_SELECTION_SORT_HPP_
#define _SIMPLE_SELECTION_SORT_HPP_

#include <iostream>
#include "mylist.hpp"

using namespace std;

void SimpleSelectionSort(MyList *L1)
{
	for(int i = 0; i < L1->length; i++)
	{
		int min = i;
		for(int j = i; j < L1->length; j++)
		{
			if(L1->data[min] > L1->data[j])
			{
				min = j;
			}
			else
			{
				min = min;
			}
		}
		MySwap(L1, i, min);
	}
}

#endif