#include<iostream>
#include<set>
#include<deque>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
using namespace std;
int sto16to10(string a)
{
	int sum = 0;
	vector<int>temp;
	temp.reserve(a.size());
	for (unsigned int i = 0; i < a.size(); i++) {
		if (int(a[i]) > 60)
			sum += (a[i] - 55)*pow(16, a.size() - i-1);
		else
			sum += (a[i] - 48)*pow(16, a.size() - i-1);
	}
	return sum;
}
int solve(string s, int N, int K)
{
	deque<char>s_backup;
	for (int i = 0; i < s.size(); i++)
		s_backup.push_back(s[i]);
	int slice = N / 4;

	set<int>a;
	string sum;
	for (int i = 0; i < slice; i++) {

		for (int j = 0; j < N; j += slice) {
			for (int i = j; i < j + slice; i++)
			{
				sum += s_backup[i];
			}
			a.insert(sto16to10(sum));
			sum.clear();
		}
		
		//µ¦ ÇÑÄ­ÀÌµ¿.
		 char move = s_backup.back();
		 s_backup.push_front(move);
		 s_backup.pop_back();
	}
	int kk =0;
	vector<int>answer;

	for (auto i : a) {
		answer.push_back(i);
	}
	sort(answer.begin(), answer.end(),greater<int>());
	return answer[K-1];
}

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N;
		int K;
		string temp;
		cin >> N >> K;
		cin >> temp;
		cout << "#" << test_case << " " << solve(temp, N, K) << endl;

	}
	return 0;
}