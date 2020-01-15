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

int GetHiPriChildIDX(Heap* ph, int idx) //�� �ڽĳ���� ���� �켱������ �ڽĳ�� �ε��� ��ȯ.
{
	//�ڽ� ��尡 �������� �ʴ´ٸ� 0�� ��ȯ!
	if (GetLeftChildIDX(idx) > ph->numOfData)
		return 0;
	// �ڽ��� ���ʿ� �ϳ���� �װ� ��ȯ !
	else if (GetLeftChildIDX(idx) == ph->numOfData)
		return GetRightChildIDX(idx);
	//�ڽĳ�尡 �Ѵ� �����Ѵٸ�
	else
	{
		//�������� �� �켱������ ���ٸ�
		if (ph->heapArr[GetLeftChildIDX(idx)].pr > ph->heapArr[GetRightChildIDX(idx)].pr)
			return GetRightChildIDX(idx);
		else //������ �� ���ٸ� !
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
	HData retData = (ph->heapArr[1]).data;	//��ȯ�� ���ؼ� ������ ������ ����.
	HeapElem lastElem = ph->heapArr[ph->numOfData]; //���� ������ ��� ����.

	int parentIdx = 1; //��Ʈ ��尡 �־�� �� �ε��� �� ����.
	int childIdx;	//������ ��尡 ���ڿ��� ��ġ������ ����.

	//��Ʈ ����� �켱������ ���� �ڽ� ��带 �������� �ݺ��� ����.
	while (childIdx = GetHiPriChildIDX(ph, parentIdx))
	{
		if (lastElem.pr <= ph->heapArr[childIdx].pr) //������ ���� �켱���� ��.
			break; //������ ��尡 �켱������ ������ �ݺ��� Ż��.

		//������ ��庸�� �켱������ ������ , �񱳴�� ��Ʈ�� ��ġ�� �ѷ��� �ø�.
		ph->heapArr[parentIdx] = ph->heapArr[childIdx];//
		parentIdx = childIdx; //������ ��尡 ����� ��ġ������ �� ���� ����
	} //�ݺ����� Ż���ϸ� parentIdx �� ������ ����� ��ġ������ �����.

	ph->heapArr[parentIdx] = lastElem; //������ ��� ���� ����.
	ph->numOfData -= 1;
	return retData;
}