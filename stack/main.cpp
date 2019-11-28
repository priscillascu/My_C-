#include <iostream>
#include "stack.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
	int data[5] = {1, 2, 3, 4, 5};
	my_stack *s1;
	s1 = new my_stack;   //初始化时，因为S1是个指针，所以要为它new一个新空间
	for(int i = 0; i < 5; i++)
	{
		s1->data[i] = data[i];
		s1->top = i;
	}
	ShowStack(s1);
	stack_push(s1, 10);
	ShowStack(s1);
	stack_pop(s1, 3);
	ShowStack(s1);
	return 0;
}