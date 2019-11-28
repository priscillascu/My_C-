#include <iostream>
using namespace std;

#define MAXSIZE 20

struct my_stack
{
	int data[MAXSIZE];
	int top = 0;
};

void ShowStack(my_stack *s1);
my_stack *stack_push(my_stack *stack1, int number);
my_stack *stack_pop(my_stack *s1, int pop_number);

void ShowStack(my_stack *s1)
{
	for(int i = 0; i <= s1->top; i++)
	{
		cout << s1->data[i] << endl;
	}
}

my_stack *stack_push(my_stack *stack1, int number)
{
	if(stack1->top == MAXSIZE - 1)  //若栈满了
	{
		cout << "栈已满，无法push" << endl;
		return 0;
	}
	else
	{
		stack1->top++;
		stack1->data[stack1->top] = number;
		return stack1;
	}
}

my_stack *stack_pop(my_stack *s1, int pop_number)
{
	if(pop_number > MAXSIZE)
	{
		cout << "pop error" << endl;
		return 0;
	}
	else
	{
		s1->top = s1->top - pop_number;
		return s1;
	}
}