#include<iostream>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N;
		cin >> N;
		cout << "#" << test_case << endl;
		int arr[8] = { 50000,10000,5000,1000,500,100,50,10 };
	
		for (int i = 0; i < 8; i++)
		{
			if (N / arr[i] != 0)
			{
				cout << N / arr[i] << " ";
				N = N - arr[i] * (N / arr[i]);
			}
			else
				cout << 0 << " ";
		}
		cout << endl;
	}
	return 0;
}