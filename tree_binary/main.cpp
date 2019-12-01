#include <iostream>
#include "tree_binary.hpp"
using namespace std;

int main(int argc, char const *argv[])
{
	BiT_node *T1;
	BiT_node *T2;
	T1 = new BiT_node;
	T1->data = 1;
	//T1->lchild = nullptr;
	//T1->rchild = nullptr;
	T2 = T1->lchild;
	T2 = new BiT_node;
	T2->data = 2;
	
	PreOrderTraverse(T1);
	return 0;
}