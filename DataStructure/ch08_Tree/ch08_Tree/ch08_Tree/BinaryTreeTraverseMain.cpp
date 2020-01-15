#include<iostream>
#include"BinaryTree.h"
using namespace std;	

void InorderTraverse(BTreeNode* bt)
{
	if (bt == nullptr)
		return;

	InorderTraverse(bt->left);	//�¸���
	cout << bt->data << " ";	//�̰� root �湮�ϴ°���.
	InorderTraverse(bt->right);	//�� �Ŀ� 
	//���� ������ �̰� ���� �ٲٸ� �� ���� �����غ���.
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