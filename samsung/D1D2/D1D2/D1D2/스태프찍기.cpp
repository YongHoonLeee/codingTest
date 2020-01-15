#include<iostream>
#include<string>
using namespace std;
void clap(int i)
{
	int cnt = 0;
	string temp = to_string(i);
	for (unsigned int i = 0; i < temp.size(); i++) {
		if (temp[i] == '3' || temp[i] == '6' || temp[i] == '9')
			cnt++;
	}
	if (cnt == 0)
		cout << i << " ";
	else {
		for (int i = 0; i < cnt; i++)
			cout << "-";
		cout << " ";
	}
}
int main(int argc, char** argv)
{
	int T;
	cin >> T;
	for (int i = 1; i <= T; i++)
		clap(i);


	getchar(); getchar();
	

	return 0;
}