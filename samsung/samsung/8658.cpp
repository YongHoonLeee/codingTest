#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int FindSums(int input)
{
	int sum = 0;
	for (int i = 0; i < 7; i++)
	{
		if (input > 0)
		{
			int mok = input / 10;
			int zzigegi = input % 10;
			sum += zzigegi;
			input = mok;
		}
		else
			return sum;
	}
}

void solve(int *input)
{
	vector<int>sums;
	for (int i = 0; i < 10; i++)
	{
		sums.push_back( FindSums(input[i]));
	}
	sort(sums.begin(), sums.end());

	cout << sums[9] << " " << sums[0];
}
int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int inputs[10];
		for (int i = 0; i < 10; i++)
		{
			int temp;
			cin >> temp;
			inputs[i] = temp;
		}
		cout << "#" << test_case<<" ";
		solve(inputs); cout << endl;
	}
	return 0;
}