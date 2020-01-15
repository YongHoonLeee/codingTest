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
		int min = 10001;
		int max = -1;
		int temp;
		for (int i = 0; i < 10; i++)
		{
			cin >> temp;

			if (temp >= max)
				max = temp;
			else if (temp <= min)
				min = temp;

			sum += temp;
		}

		double avg = (sum - min - max) / 8.0;

		cout << "#" << test_case << " " << int(avg + 0.5) << endl;
	}
	return 0;
}