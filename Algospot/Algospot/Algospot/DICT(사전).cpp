#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;


int combination(int n, int r) {
	if (n == r || r == 0) return 1;
	else return combination(n - 1, r - 1) + combination(n - 1, r);

}
int min(int n, int m) {
	if (n >= m)
		return m;
	else
		return n;
}
int main()
{
	int C;
	cin >> C;
	for (int i = 0; i < C; i++)
	{
		int n, m, k;
		cin >> n >> m >> k;
		string s;
		int input;
		if (m == 0)
			input = 0;
		else {
			input = pow(2, m) - 1;
		}

		int max = combination(n + m, min(n, m)) + 1;
		if (k > max)
		{
			cout << "NOME" << endl;
		}
		else {
			input += k;
			while (1) {
				while (input > 1) {
					if (input % 2 == 1) {
						s += 'b';
					}
					else
						s += 'a'; //2진수 변환
					input /= 2;
				}
				s += 'b';
				reverse(s.begin(), s.end());
				s.clear();

			}
		}
	}
		return 0;
	}
