#include <iostream>   
#include <algorithm>
#include <string>
#include<functional>
using namespace std;

int T, N, K, index;

double score[101];
string grade[10] = { "A+", "A0", "A-", "B+", "B0", "B-", "C+", "C0", "C-", "D0" };

int main()
{
	cin >> T;

	for (int t = 1; t <= T; t++)
	{
		cin >> N >> K;

		for (int i = 1; i <= N; i++)
		{
			int score1, score2, score3;

			cin >> score1 >> score2 >> score3;

			score[i] = score1 * 0.35 + score2 * 0.45 + score3 * 0.20;
		}

		double temp = score[K];

		sort(score + 1, score + N + 1, greater<double>()); // 내림차순 grater, 오름차순 less

		for (int i = 1; i <= N; i++)
		{
			if (score[i] == temp)
			{
				index = i;
			}
		}

		if (index == 1)
		{
			cout << "#" << t << " " << grade[index - 1] << endl;
			continue;
		}if (index != 1)
		{
			cout << "#" << t << " " << grade[(int)((index - 1) / (N / 10))] << endl;
			continue;
		}
	}
}