#include<iostream>
#include<algorithm>
using namespace std;
int solve(int *ARR, int MAX, int SIZE)
{
	int ret = 0, temp;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = SIZE - 1; j>i; j--)
		{
			if (ARR[i] + ARR[j] <= MAX) {
				temp = ARR[i] + ARR[j];
				if (temp>ret)
					ret = temp;
				if (ret == MAX) {
					return ret;
				}
			}
		}
	}
	if (ret == 0)
		return -1;
	else
		return ret;

}
int main(int argc, char** argv)
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int test_case;
	int T;
	cin >> T;
	int N, M;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		cin >> N >> M;
		int *arr = new int[N];//n개 짜리 배열 만들기.
		int e;
		for (int i = 0; i < N; i++) {
			cin >> e;
			arr[i] = e;
		}
		cout << "#" << test_case << " " << solve(arr, M, N) << endl;
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}