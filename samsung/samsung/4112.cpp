#include<iostream>
#include<vector>
using namespace std;

class location {	//예외처리를 잘해야겠다 ^^ ; 상황별 테스트케이스를 잘 활용하자.
public:
	int x;
	int y;
};

int solve(location A, location B, int answer)
{
	int xcha = B.x - A.x;
	
	int ycha = B.y - A.y;
	if (ycha < 0&&xcha==0)
		ycha = -ycha;
	if (xcha == 0)
		return answer + ycha;
	else
	{
		if (ycha <= 0)
		{
			A.x++;
			return solve(A, B, answer + 1);
		}
		else
		{
			A.x++;
			A.y++;
			return solve(A, B, answer + 1);
		}
	}
}
int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	int sum = 1;
	vector<int> apt;
	apt.reserve(142);
	for (int i = 0; i < 142; i++)
	{
		apt.push_back(sum += i);
	}

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int a, b;
		cin >> a >> b;

		location A;
		location B;
		for (int i = 0; i < 142; i++)
		{
			if (apt[i] <= a)
				continue;
			else {
				A.x = i;
				A.y = a - apt[i - 1] + 1;
				break;
			}
		}
		for (int i = 0; i < 142; i++)
		{
			if (apt[i] <= b)
				continue;
			else {
				B.x = i;
				B.y = b - apt[i - 1] + 1;
				break;
			}
		}
		int answer;

		if (B.x >= A.x)
			answer = solve(A, B, 0);
		else
			answer = solve(B, A, 0);

		cout << "#" << test_case << " " << answer << endl;

	}
	return 0;
}