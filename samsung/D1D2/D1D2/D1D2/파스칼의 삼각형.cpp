#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N;
		cin >> N;
		vector<vector<int> > v(N, vector<int>());
		if(N==1)
			v[0].push_back(1);
		else if (N >= 2) {
			v[0].push_back(1);
			v[1].push_back(1);
			v[1].push_back(1);
		}

		for (int i = 2; i < N; i++)
		{
			v[i].push_back(1);
			for (int j = 0; j < i - 1; j++)
				v[i].push_back(v[i - 1][j] + v[i - 1][j + 1]);
			
			v[i].push_back(1);
		}


		cout << "#"<<test_case<<endl;
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < v[i].size(); j++)
			{
				cout << v[i][j] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}