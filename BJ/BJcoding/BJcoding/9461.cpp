#include<iostream>
using namespace std;

int main() {
	int test_case;
	cin >> test_case;
	long long array[101] = { 1,1,1,1,2,2, };
	for (int i = 6; i <= 101; i++)
		array[i]= array[i - 1] + array[i - 5];

	for (int i = 0; i < test_case; i++)
	{
		int n;
		cin >> n;
		cout << array[n] << endl;
	}
	getchar(); return 0; 
}