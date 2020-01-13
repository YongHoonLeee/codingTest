#include<iostream>
#include<unordered_map>
#include<vector>
#include<queue>
using namespace std;		//푸는중.

vector<unordered_map<int, int>> CarIn(vector<unordered_map<int, int>> flag,int x)
{
	if(flag.size())
	for( auto iter:flag)

}


int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int n; //주차공간
		int m; //차량의 대수
		int R;//주차공간당 요금
		int W;//차량 무게
		int x; //차량의 들어오고 나가고.
		int cash = 0; //번돈.
		cin >> n >> m;
		
		vector<int> juchajangValue;
		juchajangValue.reserve(n);
		
		vector<unordered_map<int, int>> juchajangFalg;
		juchajangFalg.reserve(n);
		
		for (auto iter : juchajangValue)
		{
			cin >> R;
			juchajangValue.push_back(R);
		}

		unordered_map<int, int> CarAndWeight;
		for (int j=0;j<m;j++)
		{
			cin >> W;
			CarAndWeight[j] = W;
		}
		deque<int>input;
		deque<int>output;
		for (int i = 0; i < 2 * m; i++)
		{
			cin >> x;
			if (x > 0)
				input.push_back(x);
			else
				output.push_back(x);
		}
	}
	return 0;
}