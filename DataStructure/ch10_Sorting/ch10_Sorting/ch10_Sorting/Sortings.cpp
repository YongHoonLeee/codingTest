#include<iostream>
using namespace std; 
#include"ListBaseQueue.h"
void BubbleSort(int *arr, int n)
{
	int temp;
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < (n - i) - 1; j++)
		{
			if (arr[j] > arr[j+1])
			{	//두 데이터를 swap
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

void SelectSort(int *arr, int n)
{
	int maxIdx, temp;
	for (int i = 0; i < n - 1; i++)
	{
		maxIdx = i;

		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[maxIdx])
				maxIdx = j;
		}

		temp = arr[i];
		arr[i] = arr[maxIdx];
		arr[maxIdx] = temp;
	}
}

void InsertSort(int *arr, int n)
{
	int j;
	int insData;

	for (int i = 1; i < n; i++)
	{
		insData = arr[i];

		for (j = i - 1; j >= 0; j--)
		{
			if (arr[j] > insData)
				arr[j + 1] = arr[j]; //비교대상 한칸 밀기.
			else
				break; //삽입위치 찾았으니 탈출!
		}
		arr[j + 1] = insData;  //j 는 지역변수로 해줘야겠네 for 문 밖에서도 쓰이니까!

	}

	//Heap 정렬은 usefulheap이 다른 폴더에 있어서 생략.
}

void MergeTwoArea(int *arr, int left, int mid, int right)
{
	int fIdx = left;
	int rIdx = right;
	int i;

	int * sortArr = new int[right+1];
	int sIdx = left;

	while (fIdx <= mid &&rIdx <= right)
	{
		if (arr[fIdx] <= arr[rIdx])
			sortArr[sIdx] = arr[fIdx++];
		else
			sortArr[sIdx] = arr[rIdx++];

		sIdx++;
	}
	if (fIdx > mid)
	{
		for (i = rIdx; i <= right; i++, sIdx++)
			sortArr[sIdx] = arr[i];
	}
	else
	{
		for (i = fIdx; i <= mid; i++, sIdx++)
			sortArr[sIdx] = arr[i];
	}
	for (i = left; i <= right; i++)
		arr[i] = sortArr[i];

	delete[] sortArr;
}

void MergeSort(int *arr, int left, int right)
{
	int mid;
	if (left < right)
	{
		mid = (left + right) / 2;

		MergeSort(arr, left, mid);
		MergeSort(arr, mid, right);

		MergeTwoArea(arr, left, mid, right);
	}
}

void Swap(int* arr, int idx1, int idx2)
{
	int temp = arr[idx1];
	arr[idx1] = arr[idx2];
	arr[idx2] = temp;
}

int Partition(int*arr, int left, int right)
{
	int pivot = arr[left];
	int low = left + 1;
	int high = right;

	while (low <= high)
	{
		while (pivot >= arr[low]&&low<=right)
			low++;

		while (pivot <= arr[high]&&high>=(left+1))
			high--;

		if (low <= high)
			Swap(arr, low, high);
	}
	Swap(arr, left, high);
	return high;
}
void QSort(int* arr, int left, int right)
{
	if (left <= right)
	{	//반으로 나눠서 
		int pivot = Partition(arr, left, right);
		//재귀적으로 호출 !
		QSort(arr, left, pivot - 1);
		QSort(arr, pivot + 1, right);

	}
}


#define BUCKET_NUM 10
void RadixSort(int* arr, int num, int maxLen)
{
	Queue buckets[BUCKET_NUM];
	int bi;
	int pos;
	int di;
	int divfac = 1;
	int radix;

	for (bi = 0; bi < BUCKET_NUM; bi++)
		QueueInit(&buckets[bi]);

	for (pos = 0; pos < maxLen; pos++)
	{
		for (di = 0; di < num; di++)
		{
			radix = (arr[di] / divfac) % 10;

			Enqueue(&buckets[radix], arr[di]);
		}

		for (bi = 0; bi < BUCKET_NUM; bi++)
		{
			while (!QIsEmpty(&buckets[bi]))
				arr[di++] = Dequeue(&buckets[bi]);
		}

		divfac *= 10; //자릿수 올리기.
	}
}

int main()
{
	int arr[7] = { 3,5,4,6,7,1,9 };
	int i;

//	MergeSort(arr, 0, 6);
	//QSort(arr, 0, 6);

	RadixSort(arr, 6, 1);
	for (int i=0;i<7;i++)
		cout << arr[i] << " ";

		cout << endl;
		getchar(); return 0; 
}
