#include<iostream>
using namespace std; 

int LSearch(int *arr, int len, int target)
{
	for (int i=0;i<len;i++)
	{
		if (arr[i] == target)
			return i;
	}
	return -1;
}

int main()
{
	int arr[] = { 3,5,7,9 };
	int index =LSearch(arr, 4, 3);

	cout << "3's index in array is " << index << endl;
	getchar(); return 0; 

}