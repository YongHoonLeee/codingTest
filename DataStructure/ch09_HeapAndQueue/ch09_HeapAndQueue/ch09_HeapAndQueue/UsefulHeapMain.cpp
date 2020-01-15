#include<iostream>
#include"UsefulHeap.h"
using namespace std; 

int DataPrioirtyComp(char ch1, char ch2)
{
	return ch2 - ch1;
	//return ch1-ch2;
}

int main()
{
	Heap heap;
	HeapInit(&heap, DataPrioirtyComp); //�켱���� ���Լ� ���.

	HInsert(&heap, 'A');
	HInsert(&heap, 'B');
	HInsert(&heap, 'C');

	cout << HDelete(&heap) << endl;

	HInsert(&heap, 'A');
	HInsert(&heap, 'B');
	HInsert(&heap, 'C');

	cout << HDelete(&heap) << endl;

	while (HIsEmpty(&heap) != 1)
		cout << HDelete(&heap) << endl;


	getchar(); return 0;
}