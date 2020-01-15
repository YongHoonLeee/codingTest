#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char** argv)		// 범위 체크 잘하자 !
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N, M;
		cin >> N >> M;
		int temp;
		vector<vector<int>> v(N, vector<int>(N));
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				cin >> temp;
				v[i][j] = temp;
			}
		}
		int max = 0;
		int sum = 0;
	//	int cnt = 0;
		for (int i = 0; i < N - M+1 ; i++)
		{
			for (int z = 0; z < N - M + 1; z++)
			{
				for (int j = i; j < i + M; j++)
				{
					for (int k = z; k < z + M; k++)
					{
						sum += v[j][k];
					}
				}
				//cnt++;
				if (sum >= max)
					max = sum;
				sum = 0;
			}
		}

		cout << "#" << test_case << " " << max << endl;
		//cout << cnt << endl;
	}
	getchar(); getchar(); getchar(); getchar();
	return 0;
}