#include <iostream>
#include "linked_list.hpp"
using namespace std;

int main()
{
	int a[] = {1, 2, 3, 4};
	Node *my_header = CreateLinkedList(a, 4);
	ShowList(my_header);  //my_header已经是一个*Node，所以不用加*
	int length = LengthOfList(my_header);
	cout << "该表长" << length << endl;
	my_header = DeleteNode(my_header, 1);
	ShowList(my_header);
	my_header = AddNode(my_header, 1, 100);
	ShowList(my_header);
}