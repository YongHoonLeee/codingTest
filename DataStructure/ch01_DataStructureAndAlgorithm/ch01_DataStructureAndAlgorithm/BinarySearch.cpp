#include<iostream>
#include<algorithm>
using namespace std;
bool isSorted(int *arr, int len)
{
	for (int i = 0; i < len-1; i++) {
		if (arr[i] >= arr[i + 1])
			return false;
	}
	return true;
}
int BSearch(int *arr, int len, int target)
{
	if (isSorted(arr,len) == true)
	{

		int first = 0;
		int last = len - 1;

		while (first <= last)
		{
			cout << "탐색범위 : " << first << "~" << last << endl;
			int mid = (first + last) / 2;

			if (target == arr[mid])
				return mid;
			else
			{
				if (target < arr[mid])
					last = mid - 1;
				else
					first = mid + 1;
			}
		}
		return -1;
	}
	else
		cout << "Error : array isn't stored status. pls sort that first." << endl;
}

int main()
{
	int arr[] = { 3,5,7,9,1,2,4,8,0 };
	int index = BSearch(arr, 9, 3);
	//cout << "3's index in array is " << index << endl; //안된다. 왜냐면 이진탐색의 조건은 정렬된상태!
	sort(arr, arr + 9);
	index = BSearch(arr, 9, 3);
	cout << "3's index in array is " << index << endl;
	getchar(); return 0;
}
