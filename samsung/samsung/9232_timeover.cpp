#include<iostream>
#include<vector>
using namespace std;

int fireInTheHole(vector<int>holes, int what, int xi)
{
	for (int i = 0; i <= what; i++)
		if (holes[i] < xi) {
			what = i-1;
			return what;
		}

	return what-1;
}
int solve(int N, int Q)
{
	if (Q > N)
		return 0;

	vector<int>holes;
	holes.reserve(N);
	vector<int>q;
	q.reserve(Q);

	int temp;

	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		holes.push_back(temp);
	}
	for (int i = 0; i < Q; i++)
	{
		cin >> temp;
		q.push_back(temp);
	}

	int qs = Q;
	int what = N - 1; //현재 위치.
	while (qs > 0)
	{
		what = fireInTheHole(holes, what, q[Q - qs]);
		qs--;
		if (what < qs)
			return 0;

		else if (qs == 0)
			return what+1;
	}
}

int solve2(int N, int Q)
{
	vector<int>holes;
	holes.reserve(N);
	vector<int>q;
	q.reserve(Q);

	int temp;

	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		holes.push_back(temp);
	}
	for (int i = 0; i < Q; i++)
	{
		cin >> temp;
		q.push_back(temp);
	}
	
	int  J=0;
	for (int I = 0; I < N; I++) {
		if (q[J] > holes[I]) {
			J++;
			N = I;
			I = 0;
		}
		else if(J==Q)
			return I + 1;
		else
			I++;
	}
}
int main(int argc, char** argv)
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N, Q;
		cin >> N >> Q;

		cout << "#" << test_case << " " << solve(N, Q) << endl;
	}
	getchar(); getchar();
	return 0;
}