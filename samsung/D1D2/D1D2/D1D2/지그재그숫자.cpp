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
		int sum = 0;
		for (int i = 1; i <= N; i++)
		{
			if (i % 2 == 1)
				sum += i;
			else
				sum -= i;
		}
		cout << "#" << test_case << " " << sum << endl;

	}
	return 0;
}