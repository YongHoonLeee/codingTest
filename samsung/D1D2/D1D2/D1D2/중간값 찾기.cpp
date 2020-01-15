#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(int argc, char** argv)
{
	int T;

	cin >> T;
	int  temp;
	int answer;
	int halfT = T / 2;
	vector<int>v;
	v.reserve(T);
	for (int i = 0; i < T; i++)
	{
		cin >> temp;
		v.push_back(temp);
	}
	sort(v.begin(), v.end());
	cout << v[halfT] << endl;
	return 0;
}