#include<iostream>
#include<vector>
#include<string>
using namespace std; 

int main() {
	int test_case;
	cin >> test_case;
	for (int i = 0; i < test_case; i++)
	{	
		int n;
		cin >> n;
		vector<char>v;
		v.reserve(n);
		
		string s;
		cin >> s;
		for (int i = 0; i < s.size(); i++)
		{
			for (int j = 0; j < n; j++)
				cout << s[i];
		}
		cout << endl;
	}
	 return 0; 
}