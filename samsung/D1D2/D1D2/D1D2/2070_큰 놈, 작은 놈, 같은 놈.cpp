#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		char answer;
		int A, B;
		cin >> A >> B;
		if (A > B)
			answer = '>';
		else if (A == B)
			answer = '=';
		else
			answer = '<';

		cout << "#" << test_case << " " << answer << endl;
	}
	return 0;
}