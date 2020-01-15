#include<iostream>
using namespace std; 


int BSR(int* arr, int first, int last, int target)
{
	int mid;
	if (first > last)
		return -1;
	
	mid =( first + last )/ 2;
	
	if (arr[mid] == target)
		return mid;
	
	else if (target < mid)
		return BSR(arr, first, mid - 1, target);
	
	else
		return BSR(arr, mid + 1, last, target);
}

int main()
{
	int arr[] = { 1,3,5,7,9,11 };

	cout << BSR(arr, 0, 5, 11) << endl;

	getchar(); return 0; 
}