/////////////////////////////////////////////////////////////////////////////////////////////
// �⺻ �����ڵ�� ���� �����ص� ���� �����ϴ�. ��, ����� ���� ����
// �Ʒ� ǥ�� ����� ���� �ʿ�� �����ϼ���.
// ǥ�� �Է� ����
// int a;
// float b, c;
// double d, e, f;
// char g;
// char var[256];
// long long AB;
// cin >> a;                            // int ���� 1�� �Է¹޴� ����
// cin >> b >> c;                       // float ���� 2�� �Է¹޴� ���� 
// cin >> d >> e >> f;                  // double ���� 3�� �Է¹޴� ����
// cin >> g;                            // char ���� 1�� �Է¹޴� ����
// cin >> var;                          // ���ڿ� 1�� �Է¹޴� ����
// cin >> AB;                           // long long ���� 1�� �Է¹޴� ����
/////////////////////////////////////////////////////////////////////////////////////////////
// ǥ�� ��� ����
// int a = 0;                            
// float b = 1.0, c = 2.0;               
// double d = 3.0, e = 0.0; f = 1.0;
// char g = 'b';
// char var[256] = "ABCDEFG";
// long long AB = 12345678901234567L;
// cout << a;                           // int ���� 1�� ����ϴ� ����
// cout << b << " " << c;               // float ���� 2�� ����ϴ� ����
// cout << d << " " << e << " " << f;   // double ���� 3�� ����ϴ� ����
// cout << g;                           // char ���� 1�� ����ϴ� ����
// cout << var;                         // ���ڿ� 1�� ����ϴ� ����
// cout << AB;                          // long long ���� 1�� ����ϴ� ����
/////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
#include<algorithm>
#include<vector>
#pragma warning (disable:4996)
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	scanf("%d", &T);
	int k;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		vector<int>s;
		vector<int>v;
		scanf("%d", &k);
		v.reserve(k);
		s.reserve(k*(k + 1) / 2);
		int max;
		scanf("%d", &max);
		int m;
		for (int i = 0; i < k; i++) {
			scanf("%d", &m);
			v.push_back(m);
		}
		int sum = 0;
		for (int i = 0; i < k; i++) {
			for (int j = i + 1; j < k; j++) {
				s.push_back(v[i] + v[j]);
			}
		}
		sort(s.begin(), s.end());
		if (*s.begin() > max) {
			printf("#%d -1\n", test_case);
			continue;
		}

		for (auto iter = s.rbegin(); iter != s.rend(); iter++) {
			if (max >= *iter) {
				printf("#%d %d\n", test_case, *iter);
				break;
			}
		}
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}