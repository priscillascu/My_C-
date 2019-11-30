#include <iostream>
#include "queue.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
	int data[] = {1, 2, 3, 4};
	int length = 0;
	my_queue *q1;
	q1 = new my_queue;
	length = queue_length(q1);
	cout << "初始化后的队列长为：" << length << endl;
	
	for(int i = 0; i < 4; i++)
	{
		q1 = enter_queue(q1, data[i]);
	}
	show_queue(q1);

	length = queue_length(q1);
	cout << "插入后的队列长为：" << length << endl;
	q1 = enter_queue(q1, data[1]);   //队列满了无法插入了

	q1 = delete_queue(q1, 3);
	show_queue(q1);
	return 0;
}