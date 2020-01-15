#include<iostream>
#include"UsefulHeap.h"
using namespace std; 

void HeapInit(Heap* ph, PriorityComp pc)
{
	ph->numOfData = 0;
	ph->comp = pc;
}
int HIsEmpty(Heap* ph)
{
	if (ph->numOfData == 0)
		return 1;
	else
		0;
}
int GetParentIDX(int idx)
{
	return idx / 2;
}

int GetLeftChildIDX(int idx)
{
	return idx * 2;
}

int GetRightChildIDX(int idx)
{
	return GetLeftChildIDX(idx) + 1;
}

int GetHiPriChildIDX(Heap* ph, int idx)
{
	if (GetLeftChildIDX(idx) > ph->numOfData)
		return 0;
	else if (GetLeftChildIDX(idx) == ph->numOfData)
		return GetLeftChildIDX(idx);

	else
	{
		if (ph->comp(ph->heapArr[GetLeftChildIDX(idx)], ph->heapArr[GetRightChildIDX(idx)]) < 0)
			return GetRightChildIDX(idx);
		else
			return GetLeftChildIDX(idx);
	}
}
void HInsert(Heap* ph, HData data)
{
	int idx = ph->numOfData;

	while (idx != 1)
	{
		if (ph->comp(data, ph->heapArr[GetParentIDX(idx)]) > 0)
		{
			ph->heapArr[idx] = ph->heapArr[GetParentIDX(idx)];
			idx = GetParentIDX(idx);
		}
		else
		{
			break;
		}
	}
	ph->heapArr[idx] = data;
	ph->numOfData++;
}
HData HDelete(Heap* ph)
{
	HData retData = ph->heapArr[1];
	HData lastElem = ph->heapArr[ph->numOfData];

	int parentIdx = 1;
	int childIdx;

	while (childIdx = GetHiPriChildIDX(ph, parentIdx))
	{
		if (ph->comp(lastElem, ph->heapArr[childIdx]) >= 0)
			break;

		ph->heapArr[parentIdx] = ph->heapArr[childIdx];
		parentIdx = childIdx;
	}
	ph->heapArr[parentIdx] = lastElem;
	ph->numOfData--;
	return retData;
}