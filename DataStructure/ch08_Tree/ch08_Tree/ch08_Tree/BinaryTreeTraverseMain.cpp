#include<iostream>
#include"BinaryTree.h"
using namespace std;	

void InorderTraverse(BTreeNode* bt)
{
	if (bt == nullptr)
		return;

	InorderTraverse(bt->left);	//좌먼저
	cout << bt->data << " ";	//이게 root 방문하는거임.
	InorderTraverse(bt->right);	//우 후에 
	//전위 후위도 이거 순거 바꾸면 됨 ㅇㅇ 생각해보기.
}

int main()
{
	BTreeNode* bt1 = MakeBTreeNode();
	BTreeNode* bt2 = MakeBTreeNode();
	BTreeNode* bt3 = MakeBTreeNode();
	BTreeNode* bt4 = MakeBTreeNode();

	SetData(bt1, 1);
	SetData(bt2, 2);
	SetData(bt3, 3);
	SetData(bt4, 4);

	MakeLeftSubTree(bt1, bt2);
	MakeRightSubTree(bt1, bt3);
	MakeLeftSubTree(bt2, bt4);

	InorderTraverse(bt1);
	getchar(); return 0; 
}