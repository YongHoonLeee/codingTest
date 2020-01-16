#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int h1, m1,h2,m2,sum_h,sum_m;
		cin >> h1 >> m1>>h2>>m2;
		sum_h = h1 + h2;
		sum_m = m1 + m2;
		if (sum_m >= 60)
		{
			sum_h++;
			sum_m -= 60;
		}
		if (sum_h >= 12)
			sum_h -= 12;

		cout << "#" << test_case << " " << sum_h << " " << sum_m << endl;
	}
	return 0;
}