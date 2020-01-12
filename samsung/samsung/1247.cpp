#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T;
	cin >> T;

	for (int test_case = 1; test_case <= T; test_case++)
	{
		int N;
		cin >> N;

		int ox, oy;
		int hx, hy;
		cin >> ox >> oy >> hx >> hy;

		vector<pair<int, int>> gogak;
		int x, y;
		for (int i = 0; i < N; i++)
		{
			cin >> x >> y;
			gogak.push_back(make_pair(x, y));
		}

		sort(gogak.begin(), gogak.end());
		int min = 10000;
		int sum;
		do
		{	//회사에서 첫번째로
			sum = abs(ox - gogak[0].first) + abs(oy - gogak[0].second);
			//순열에 따라 고객들 방문.
			for (int i = 0; i < N - 1; i++)
			{
				sum += abs(gogak[i].first - gogak[i + 1].first) + abs(gogak[i].second - gogak[i + 1].second);
			}
			//집으로
			sum += abs(gogak[N - 1].first - hx) + abs(gogak[N - 1].second - hy);

			if (sum < min)
			{
				min = sum;
			}
		} while (next_permutation(gogak.begin(), gogak.end()));

		cout << "#" << test_case << " " << min << endl;
	}

	return 0;
}


