#include<iostream>
using namespace std;

long findMaxIndex(int *arr, long where, long N) {
	long max_index = where;
	long max = arr[where];
	for (long i = where; i < N; i++) {
		if (arr[i] > max) {
			max = arr[i];
			max_index = i;
		}
	}
	return max_index;
}

long solve(int* arr, long i, long N, long sum) {
	if (i == N)
		return sum;

	long ii = findMaxIndex(arr, i, N); //i와 n 사이의 가장큰 ii를 찾는다.
	if (i == 0 && ii == 0)
		solve(arr, i + 1, N, sum);

	for (long j = i; j < ii; j++)
		sum += (arr[ii] - arr[j]);

	solve(arr, ii + 1, N, sum);
}
int main(int argc, char** argv)
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	int test_case;
	int T;

	cin >> T;
	long N, C;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		cin >> N;
		int *day = new int[N];
		for (int i = 0; i < N; i++) {
			cin >> C;
			day[i] = C;
		}
		cout << "#" << test_case << " " << solve(day, 0, N, 0) << endl;
		delete[] day;
	}
	return 0;
}

//재귀함수를 통한 0~N까지 부분합으로 풀었다.
//감동.