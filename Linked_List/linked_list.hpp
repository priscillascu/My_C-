#include <iostream>
using namespace std;

#define MAXSIZE 10

struct Node
{
	int data;
	struct Node *next;  //该指针指向下一个结构体，next为一个结点的指针，和header效果一样
};

Node *CreateLinkedList(int a[], int number);
int LengthOfList(Node *header_node);
void ShowList(Node *header_node);
Node *DeleteNode(Node *header_node, int pos);
Node *AddNode(Node *header_node, int pos, int add_number);

Node *CreateLinkedList(int a[], int number)   //相当于将Node当成一个新的数据类型，因为要返回的是一个指针，所以定义为Node *
{
	Node *header_node;  
	Node *current_node;   //定义两个结构体指针

	header_node = new Node;  //为header开辟新空间
	current_node = header_node;  //当前工作指针指向头节点

	for(int i = 0; i < number; i++)
	{
		Node *templt = new Node;  //为临时结点开辟新空间
		templt->data = a[i];
		templt->next = nullptr;
		current_node->next = templt;
		current_node = templt;
	}
	
	return header_node;
};

int LengthOfList(Node *header_node)
{
	Node *cur = header_node;
	if(header_node->next == nullptr)
	{
		cout << "该表无数据" << endl;
		return 0;
	}
	else
	{
		int length = 0;
		while(cur->next != nullptr)
		{
			length++;
			cur = cur->next;
		}
		return length;
	}
}

void ShowList(Node *header_node)
{
	Node *cur = header_node;
	for(int i = 0; i < LengthOfList(header_node); i++)
	{
		cout << cur->next->data << endl;
		cur = cur->next;
	}
}

Node *DeleteNode(Node *header_node, int pos)  //删除头结点后第pos个结点，pos大于0
{
	int length = LengthOfList(header_node);
	if(pos <= 0 || length == 0)
	{
		cout << "删除错误" << endl;
	}
	else
	{
		cout << "删除头结点后第" << pos << "个结点：" << endl;
		Node *cur = header_node;  //定义当前指针
		Node *pre = cur;  //定义上一个位置的指针
		for(int i = 0; i < pos; i++)  //移动当前指针到要删除的位置
		{
			pre = cur;
			cur = cur->next;
		}
		if(pos == length)
			pre->next = nullptr;
		else
			pre->next = cur->next;
	}
	return header_node;
}

Node *AddNode(Node *header_node, int pos, int add_number)  //在头结点后第pos个结点后面插入新结点，pos>=0
{
	int length = LengthOfList(header_node);
	if(pos < 0 || pos > length || length == 0)
	{
		cout << "插入错误" << endl;
	}	
	else
	{
		cout << "在头结点后第" << pos << "个结点的后面插入元素：" << endl;
		Node *cur = header_node;  //定义当前指针
		Node *new_node = new Node;  //为新加入的结点开辟空间
		new_node->data = add_number;
		for(int i = 0; i < pos; i++)
		{
			cur = cur->next;
		}		
		if(pos == length)
		{
			cur->next = new_node;
			new_node->next = nullptr;
		}
		else
		{
			new_node->next = cur->next;
			cur->next = new_node;
		}
	}
	return header_node;
}
