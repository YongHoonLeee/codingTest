#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		double sum = 0;
		int temp;
		for (int i = 0; i < 10; i++)
		{
			cin >> temp;
			sum += temp;
		}
			if ((sum / 10) - int(sum / 10) >= 0.5)
				cout << "#" << test_case << " " << int(sum / 10) + 1 << endl;
			else
				cout << "#" << test_case << " " <<int( sum / 10) << endl;
	}
	return 0;
}