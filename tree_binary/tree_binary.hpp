#include <iostream>

using namespace std;

struct BiT_node
{
	int data;
	struct BiT_node *lchild;   //定义左右孩子指针
	struct BiT_node *rchild;
};

void PreOrderTraverse(BiT_node *T1);  //前序遍历
void InOrderTraverse(BiT_node *T1);  //中序遍历
void PostOrderTraverse(BiT_node *T1);  //后序遍历
void CreatBinaryTree(BiT_node *T1);

void PreOrderTraverse(BiT_node *T1)  //前序遍历
{
	if(T1 == nullptr)
	{
		cout << "无孩子结点" << endl;
		//return;
	}
	else
	{
		cout << "元素为: " << T1->data << endl;
		PreOrderTraverse(T1->lchild);
		PreOrderTraverse(T1->rchild);
		//return;
	}
}

void InOrderTraverse(BiT_node *T1)  //中序遍历
{
	if(T1 == nullptr)
	{
		cout << "无孩子结点" << endl;
		//return;
	}
	else
	{
		InOrderTraverse(T1->lchild);
		cout << "元素为: " << T1->data << endl;
		InOrderTraverse(T1->rchild);
		//return;
	}
}

void PostOrderTraverse(BiT_node *T1)  //后序遍历
{
	if(T1 == nullptr)
	{
		cout << "无孩子结点" << endl;
		//return;
	}
	else
	{
		PostOrderTraverse(T1->lchild);
		PostOrderTraverse(T1->rchild);
		cout << "元素为: " << T1->data << endl;
		//return;
	}
}

void CreatBinaryTree(BiT_node *T1)  //创建二叉树
{
	int ch;
	cout << "请输入二叉树前序遍历字符数据，空用0替代：" << endl;
	cin >> ch;
	if(ch == 0)
	{
		T1 = nullptr;
	}
	else
	{
		T1->lchild = new BiT_node;
		T1->rchild = new BiT_node;
		T1->data = ch;
		CreatBinaryTree(T1->lchild);
		CreatBinaryTree(T1->rchild);
	}
}