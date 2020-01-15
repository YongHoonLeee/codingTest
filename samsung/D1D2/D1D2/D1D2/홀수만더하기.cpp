#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int sum = 0;
		int temp;
		for (int i = 0; i < 10; i++)
		{
			cin >> temp;
			if (temp % 2 == 1)
				sum += temp;
			else
				continue;
		}
		cout << "#" << test_case << " " << sum << endl;
	}
	return 0;
}