#include<iostream>
#include<string>
using namespace std;

void solve(string s)
{
	int alpabetArray[26]; //ASCII(a) = 97
	for (int i = 0; i < 26; i++)
		alpabetArray[i] = -1;

	for (int i = 0; i < s.size(); i++) {
		if (alpabetArray[s[i] - 97] == -1)
		{
			alpabetArray[s[i] - 97] = i;
		}
		else
			continue;
	}

	for (int i = 0; i < 26; i++)
		cout << alpabetArray[i] << " ";

	cout << endl;
}

int main() {
	string S;
	cin >> S;
	solve(S);
	char a = 'a';
	return 0;
}