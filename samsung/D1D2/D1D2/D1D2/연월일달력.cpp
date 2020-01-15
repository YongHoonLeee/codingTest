#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int answer;
		string temp;
		cin >> temp;
		int year;
		int month;
		int day;
		year = stoi(temp.substr(0, 4));
		month = stoi(temp.substr(4,2));
		day = stoi(temp.substr(6,2));
		if (month == 0 || day == 0) {
			cout << "#" << test_case << " " << -1 << endl;
			continue;
		}
		if (month == 4 || month == 6 || month == 9 || month == 11)
		{
			if (day >0 && day <= 31)
				cout << "#" << test_case << " " << temp.substr(0, 4) << "/" << temp.substr(4, 2) << "/" << temp.substr(6, 2) << endl;
			else
				cout << "#" << test_case << " " << -1 << endl;
		}
		else if (month == 2)
		{
			if(day >0 && day <= 28)
				cout << "#" << test_case << " " << temp.substr(0, 4) << "/" << temp.substr(4, 2) << "/" << temp.substr(6, 2) << endl;
			else
				cout << "#" << test_case << " " << -1 << endl;
		}
		else
		{
			if(day>0 &&day<=30)
				cout << "#" << test_case << " " << temp.substr(0, 4) << "/" << temp.substr(4, 2) << "/" << temp.substr(6, 2) << endl;
			else
				cout << "#" << test_case << " " << -1 << endl;
		}
	}
	getchar(); getchar(); getchar(); getchar(); getchar();
	return 0;
}