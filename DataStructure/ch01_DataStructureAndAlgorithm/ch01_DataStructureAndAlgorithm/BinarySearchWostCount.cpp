#include<iostream>
#include<algorithm>
using namespace std;

int BSearch(int *arr, int len, int target)
{
	int count = 0;
	int first = 0;
	int last = len - 1;

	while (first <= last)
	{
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
		count++;
	}
	cout << "비교연산 횟수 " << len << " : " << count << endl;
	return -1;
}

int main()
{
	int arr1[500] = { 0 };
	int arr2[5000] = { 0 };
	int arr3[50099] = { 0 };

	BSearch(arr1, 500, 1);
	BSearch(arr2, 5000, 1);
	BSearch(arr3, 50000, 1);

	getchar(); return 0;
}
