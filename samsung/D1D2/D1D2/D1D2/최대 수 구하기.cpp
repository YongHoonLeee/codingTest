#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int max = 0;
		int temp;
		for (int i = 0; i < 10; i++) 
		{
			cin >> temp;
			if (temp >= max)
				max = temp;
		}
		cout << "#" << test_case << " " << max << endl;
	}
	return 0;
}