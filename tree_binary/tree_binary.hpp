#include <iostream>

using namespace std;

struct BiT_node
{
	int data;
	struct BiT_node *lchild;   //定义左右孩子指针
	struct BiT_node *rchild;
};

void PreOrderTraverse(BiT_node *T1);  //前序遍历

void PreOrderTraverse(BiT_node *T1)  //前序遍历
{
	if(T1 == nullptr)
	{
		cout << "无孩子结点" << endl;
		//return;
	}
	else
	{
		cout << "元素为: " << T1->data;
		PreOrderTraverse(T1->lchild);
		PreOrderTraverse(T1->rchild);
		//return;
	}
}