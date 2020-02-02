#include<iostream>
#include<string>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int n;
		cin >> n;
		int cnt = 0;
		string input, output;
		cin >> input >> output;
		for (int i = 0; i < n; i++)
		{
			if (input.at(i) == output.at(i))
				cnt++;
		}
		cout << "#" << test_case << " " << cnt << endl;
	}
	return 0;
}