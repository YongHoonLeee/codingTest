#include<iostream>
using namespace std; 

int BSearchRecur(int *ar, int first, int last, int target)
{
	int mid;
	if (first > last)
		return -1;

	mid = (first + last) / 2;

	if (ar[mid] == target)
		return mid;
	else if (ar[mid] > target)
		return BSearchRecur(ar, first, mid - 1, target);
	else
		return BSearchRecur(ar, mid + 1, last, target);
}


int InterpolSearch(int *ar, int first, int last, int target)
{
	int mid;
	if (ar[first]>target||ar[last]<target)
		return -1;

	mid = ((double)(target = ar[first]) / (ar[last] - ar[first])*
		(last - first)) + first;

	if (ar[mid] == target)
		return mid;
	else if (ar[mid] > target)
		return InterpolSearch(ar, first, mid - 1, target);
	else
		return InterpolSearch(ar, mid + 1, last, target);
}


