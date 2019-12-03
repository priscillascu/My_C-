#include <iostream>
#include "tree_binary.hpp"
using namespace std;

int main(int argc, char const *argv[])
{
	BiT_node *T1;
	T1 = new BiT_node;
	CreatBinaryTree(T1);
	cout << "前序遍历为：" << endl;
	PreOrderTraverse(T1);
	cout << "中序遍历为：" << endl;
	InOrderTraverse(T1);
	return 0;
}