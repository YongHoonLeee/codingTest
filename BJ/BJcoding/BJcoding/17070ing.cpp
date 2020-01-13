#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int pipeState(vector<pair<int, int>>A)
{
	if (A[0].first + 1 == A[1].first&&A[0].second == A[1].second)
		return 1; // 가로
	else if (A[0].first + 1 == A[1].first&&A[0].second + 1 == A[1].second)
		return 0; //대각선
	else
		return -1; //세로
}

void bfs(vector<pair<int, int>> AandB, vector<vector<int>>map,int N) {
	vector<vector<bool>> discoverd(N, vector<bool>(N,false));


	discoverd[AandB[0].first][AandB[0].second] = true;
	discoverd[AandB[1].first][AandB[1].second] = true;

	
	q.push(AandB);

	
}

int main()
{
	int N;
	cin >> N;
	vector<vector<int>>map(N,vector<int>(N));
	int temp;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> temp;
			map[i][j] = temp;
		}
	}
	vector<pair<int, int>> AandB;
	AandB.push_back(make_pair<int, int>(0, 0));
	AandB.push_back(make_pair<int, int>(0, 1));


}