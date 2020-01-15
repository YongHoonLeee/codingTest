#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		string temp;
		cin >> temp;
		string pmet;
		pmet = temp;
		reverse(pmet.begin(), pmet.end());
		if (temp == pmet)
			cout << "#" << test_case << " " << 1 << endl;
		else
			cout << "#" << test_case << " " << 0 << endl;

	}
	return 0;
}