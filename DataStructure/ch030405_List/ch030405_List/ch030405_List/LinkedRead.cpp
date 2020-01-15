#include<iostream>
#include<cstdlib>
using namespace std; 

class Node
{
public:
	int data;
	Node *next;
};

int main()
{
	Node* head = nullptr;
	Node* tail = nullptr;
	Node* cur = nullptr;

	Node* newNode = nullptr;
	int readData;

	while (true)
	{
		cout << "Pls input N : ";
		cin >> readData;
		if (readData < 1)
			break;

		Node* newNode = new Node();
		newNode->data = readData;
		newNode->next = nullptr;

		if (head == nullptr)
			head = newNode;
		else
			tail->next = newNode;

		tail = newNode;
	}
	cout << endl;

	if (head == nullptr)
	{
		cout << "No data." << endl;
	}
	else
	{
		cur = head;
		cout << cur->data << " ";

		while (cur->next != nullptr)
		{
			cur = cur->next;
			cout << cur->data << " ";
		}
	}
	cout << endl << endl;

	//free ¤¾¤¾

	if (head == nullptr)
	{
		return 0;
	}
	else
	{
		Node* delNode = head;
		Node* delNextNode = head->next;

		cout << head->data << "is distroyed.." << endl;
		delete delNode;

		while (delNextNode != nullptr)
		{
			delNode = delNextNode;
			delNextNode = delNextNode->next;

			cout << delNode->data << "is distroyed.." << endl;
			delete delNode;
		}
	}
	getchar(); getchar(); getchar(); getchar(); return 0;
}