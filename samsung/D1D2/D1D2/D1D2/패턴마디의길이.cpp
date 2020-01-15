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
		string  temp;
		cin >> temp;
		int i;
		int answer;
		for (i = 1; i <= temp.size()/2; i++)
		{
			if (temp.substr(0, i) == temp.substr(i,i)) {
				answer = i;
				break;
			}
		}
		cout << "#" << test_case << " " << answer<< endl;
	}
	getchar(); getchar(); getchar(); getchar(); getchar(); getchar();
	return 0;
}