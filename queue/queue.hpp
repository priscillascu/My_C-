#include <iostream>

using namespace std;

#define MAXSIZE 5

struct my_queue
{
	int data[MAXSIZE];
	int front = 0;
	int rear = 0;
};


int queue_length(my_queue *q1);
void show_queue(my_queue *q1);
my_queue *enter_queue(my_queue *q1, int en_number);
my_queue *delete_queue(my_queue *q1, int delete_num);

int queue_length(my_queue *q1)
{
	return (q1->rear - q1->front + MAXSIZE)%MAXSIZE;  //该语句实现了对rear和front相对位置的判断
}

void show_queue(my_queue *q1)
{
	for(int i = q1->front; i < queue_length(q1); i++)
		cout << q1->data[i] << endl;
}

my_queue *enter_queue(my_queue *q1, int en_number)
{
	if((q1->rear + 1) % MAXSIZE == q1->front)
	{
		cout << "队列已满" << endl;
		return q1;
	}
	else
	{
		q1->data[q1->rear] = en_number;
		q1->rear = (q1->rear + 1) % MAXSIZE;   //该语句实现了rear循环自增，当rear满了以后可以回到0再来
		cout << "rear:" << q1->rear << endl;
		return q1;
	}
}

my_queue *delete_queue(my_queue *q1, int delete_num)
{
	if(q1->front == q1->rear)
	{
		cout << "队列为空！" << endl;
		return q1;
	}
	else if(delete_num > queue_length(q1))
	{
		cout << "删除数量有误！" << endl;
		return q1;
	}
	else
	{
		q1->front = (q1->front + delete_num) % MAXSIZE;  //让front循环自增，增满后从0开始
		cout << "front:" << q1->front << endl;
		return q1;
	}
}