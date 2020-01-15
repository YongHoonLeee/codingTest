#include<iostream>
#include<cstdlib>
#include"BinaryTree.h"
using namespace std;

BTreeNode* MakeBTreeNode(void)
{
	BTreeNode* nd = new BTreeNode;
	nd->left = nullptr;
	nd->right = nullptr;
	return nd;
}

BTData GetData(BTreeNode* bt)
{
	return bt->data;
}

void SetData(BTreeNode* bt, BTData data)
{
	bt->data = data;
}

BTreeNode* GetLeftSubTree(BTreeNode* bt)
{
	return bt->left;
}
BTreeNode* GetRightSubTree(BTreeNode* bt)
{
	return bt->right;
}

void MakeLeftSubTree(BTreeNode* main, BTreeNode* sub)
{
	if (main->left != nullptr)
		delete main->left;

	main->left = sub;
}
void MakeRightSubTree(BTreeNode* main, BTreeNode* sub)
{
	if (main->right != nullptr)
		delete main->right;

	main->right = sub;
}
