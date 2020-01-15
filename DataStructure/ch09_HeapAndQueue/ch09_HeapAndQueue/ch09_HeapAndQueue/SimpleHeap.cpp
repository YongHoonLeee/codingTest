#include"SimpleHeap.h"

void HeapInit(Heap* ph)
{
	ph->numOfData = 0;
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

int GetHiPriChildIDX(Heap* ph, int idx) //두 자식노드중 높은 우선순위의 자식노드 인덱스 반환.
{
	//자식 노드가 존재하지 않는다면 0을 반환!
	if (GetLeftChildIDX(idx) > ph->numOfData)
		return 0;
	// 자식이 왼쪽에 하나라면 그걸 반환 !
	else if (GetLeftChildIDX(idx) == ph->numOfData)
		return GetRightChildIDX(idx);
	//자식노드가 둘다 존재한다면
	else
	{
		//오른쪽이 더 우선순위가 높다면
		if (ph->heapArr[GetLeftChildIDX(idx)].pr > ph->heapArr[GetRightChildIDX(idx)].pr)
			return GetRightChildIDX(idx);
		else //왼쪽이 더 높다면 !
			return GetLeftChildIDX(idx);
	}
}
void HInsert(Heap* ph, HData data, Priority pr)
{
	int idx = ph->numOfData + 1;
	HeapElem nelem = { pr,data };

	while (idx != 1)
	{
		if (pr < ph->heapArr[GetParentIDX(idx)].pr)
		{
			ph->heapArr[idx] = ph->heapArr[GetParentIDX(idx)];
			idx = GetParentIDX(idx);
		}
		else
			break;
	}
	ph->heapArr[idx] = nelem;
	ph->numOfData += 1;
}

HData HDelete(Heap* ph)
{
	HData retData = (ph->heapArr[1]).data;	//반환을 위해서 삭제할 데이터 저장.
	HeapElem lastElem = ph->heapArr[ph->numOfData]; //힙의 마지막 노드 저장.

	int parentIdx = 1; //루트 노드가 있어야 할 인덱스 값 저장.
	int childIdx;	//마지막 노드가 저자오딜 위치정보가 담긴다.

	//루트 노드의 우선순위가 높은 자식 노드를 시작으로 반복문 시작.
	while (childIdx = GetHiPriChildIDX(ph, parentIdx))
	{
		if (lastElem.pr <= ph->heapArr[childIdx].pr) //마지막 노드와 우선순위 비교.
			break; //마지막 노드가 우선순위가 높으면 반복문 탈출.

		//마지막 노드보다 우선순위가 높으니 , 비교대산 노트의 위치를 한레벨 올림.
		ph->heapArr[parentIdx] = ph->heapArr[childIdx];//
		parentIdx = childIdx; //마지막 노드가 저장될 위치정보를 한 레벨 내림
	} //반복문을 탈출하면 parentIdx 에 마지막 노드의 위치정보가 저장됨.

	ph->heapArr[parentIdx] = lastElem; //마지막 노드 최종 저장.
	ph->numOfData -= 1;
	return retData;
}