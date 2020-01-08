#include<iostream>
#include<vector>
#include<cmath> // gcc 에는 iostream 에 포함 안되어있어서 삼성서버에서 안돌아간다.
using namespace std;
int cha(int a, int b) {
	if (a >= b)
		return a - b;
	else
		return b - a;
}
int max(int a, int b) {
	if (a >= b)
		return a;
	else
		return b;
}
int Fight(int K, int sum, vector<int> v) {
	if (K == 1)
	{
		return sum + cha(v[0], v[1]);
	}
	else
	{
		vector<int> temp;
		temp.reserve(pow(2, K - 1));
		for (int i = 0; i < v.size(); i += 2)
		{
			sum += cha(v[i], v[i + 1]);
			temp.push_back(max(v[i], v[i + 1]));
		}
		return Fight(K - 1, sum, temp);
	}
}
int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int K;
		cin >> K;
		int sum = 0;

		vector<int> v;
		v.reserve(pow(2, K - 1));

		int temp;
		for (int i = 0; i < pow(2, K); i++)
		{
			cin >> temp;
			v.push_back(temp);
		}
		cout << "#" << test_case << " " << Fight(K, sum, v) << endl;
	}
	return 0;
}