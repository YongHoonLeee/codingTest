#include<iostream>
#include"SimpleHeap.h"
using namespace std; 

int main()
{
	Heap heap;
	HeapInit(&heap);

	HInsert(&heap, 'A', 1);
	HInsert(&heap, 'B', 2);
	HInsert(&heap, 'C', 3);

	cout << HDelete(&heap) << endl;

	HInsert(&heap, 'A', 1);
	HInsert(&heap, 'B', 2);
	HInsert(&heap, 'C', 3);
	
	cout << HDelete(&heap) << endl;

	while (HIsEmpty(&heap)!=1)
		cout << HDelete(&heap) << endl;

	getchar(); return 0; 
}