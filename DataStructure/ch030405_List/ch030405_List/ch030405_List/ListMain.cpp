#include<iostream>
#include"ArrayList.h"

using namespace std; 

int main()
{
	//ArrayList Init.
	List list;
	int data;
	ListInit(&list);

	LInsert(&list, 11); LInsert(&list, 11);
	LInsert(&list, 22); LInsert(&list, 22);
	LInsert(&list, 33);

	cout << "Current Data Cnt : " << LCount(&list) << endl;;

	if (LFirst(&list, &data))
	{
		cout << data <<" ";

		while (LNext(&list, &data))
			cout << data<<" ";
	}
	cout << endl << endl;

	// Find '22' and remove and print

	if (LFirst(&list, &data))
	{
		if (data == 22)
			LRemove(&list);

		while (LNext(&list, &data))
		{
			if (data == 22)
				LRemove(&list);
		}
	}

	cout << "Current Data Count : " << LCount(&list) << endl;

	if (LFirst(&list, &data))
	{
		cout << data<<" ";
		while (LNext(&list, &data))
			cout << data<<" ";
	}
	cout << endl << endl;
	getchar(); return 0; 
}