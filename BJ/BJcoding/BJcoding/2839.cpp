#include<iostream>
#include<vector>
using namespace std; 

void solve(int N) {
	int sum = 0;
	while (1) {
		if (N % 5 == 0) {
			sum += N / 5;
			cout << sum << endl;
			break;
		}

		N = N - 3;
		sum++;

		if (N < 0) {
			cout << "-1" << endl;
			break;
		}
	}
}
int main() {
	int N;
	cin >> N;

	solve(N);
	getchar(); getchar(); return 0;
}