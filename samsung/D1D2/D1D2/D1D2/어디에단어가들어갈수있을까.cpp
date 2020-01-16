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
		int N, K;
		cin >> N >> K;
		int temp;
		vector<vector<int>>puzzle(N, vector<int>(N));
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				cin >> temp;
				puzzle[i][j] = temp;
			}
		}

		int answer = 0;

		for (int i = 0; i<N; i++) {
			int cnt = 0;
			int j = 0;
			while (true)
			{
				if (!puzzle[i][j])
				{
					if (cnt == K)
						answer++;
					cnt = 0;
					j++;
				}
				else 
				{
					cnt++;
					j++;
				}
				if (j == N)
				{
					if (cnt == K)
						answer++;
					break;
				}
			}
		}
		for (int i = 0; i<N; i++)
		{
			int cnt = 0;
			int j = 0;
			while (true)
			{
				if (!puzzle[j][i])
				{
					if (cnt == K)
						answer++;
					cnt = 0;
					j++;
				}
				else
				{
					cnt++;
					j++;
				}
				if (j == N)
				{
					if (cnt == K)
						answer++;
					break;
				}
			}
		}

		cout << "#" << test_case << " " << answer << endl;

	}
	getchar(); getchar(); getchar();
	return 0;
}