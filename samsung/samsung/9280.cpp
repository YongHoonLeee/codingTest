#include<iostream>
#include<unordered_map>
#include<vector>
#include<queue>
using namespace std;		//Ǫ����.

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
		int n; //��������
		int m; //������ ���
		int R;//���������� ���
		int W;//���� ����
		int x; //������ ������ ������.
		int cash = 0; //����.
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