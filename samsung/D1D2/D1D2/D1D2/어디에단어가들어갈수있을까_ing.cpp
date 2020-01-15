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
		
		vector<int> answer;
		
		for (int j = 0; j < N; j++)
		{
			int max = -1;
			int cnt = 0;
			int go = 0;

			while (go != N)
			{
				if (puzzle[j][go] == 1)
				{
					cnt++;
					go++;
					if (max < cnt)
						max = cnt;
				}
				else
				{
					if (max < cnt)
						max = cnt;
					if (cnt >= 2)
						answer.push_back(cnt);
					cnt = 0;
					go++;
				}
			}
			if (max >= 2)
				answer.push_back(max);
			
		}

		for (int z = 0; z < N; z++)
		{
			int max = -1;
			int cnt = 0;
			int go = 0;

			while (go != N)
			{
				if (puzzle[go][z] == 1)
				{
					cnt++;
					go++;
					if (max < cnt)
						max = cnt;
				}
				else
				{
					if (max < cnt)
						max = cnt;
					if (cnt >= 2)
						answer.push_back(cnt);
					cnt = 0;
					go++;
				}
			}

			if (max >= 2)
				answer.push_back(max);
			
		}
		int answer_cnt = 0;
		cout << "#" << test_case << " ";
		for (int i = 0; i < answer.size(); i++)
		{
			if (answer[i] == K)
			{
				answer_cnt++;
			}
		}
		cout<<answer_cnt << endl;
		
	}
	getchar(); getchar(); getchar();
	return 0;
}