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
// char g = &apos;b&apos;;
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
#include<set>
#include<vector>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin >> T;
	int k;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		multiset<int>s;
		vector<int>v;
		cin >> k;
		int max;
		cin >> max;
		int m;
		for (int i = 0; i < k; i++) {
			cin >> m;
			v.push_back(m);
		}
		multiset<int>mm;
		for (int i = 0; i < v.size(); i++)
			for (int j = i + 1; j < v.size(); ++j)
				mm.insert(v[i] + v[j]);

		auto init = mm.begin();
		if (max < *init) {
			cout << "#" << test_case << " " << -1 << endl;
			break;
		}

		for (auto it = mm.rbegin(); it != mm.rend(); ++it) {
			if (*it <= max) {
				cout << "#" << test_case << " " << *it << endl;
				break;
			}
		}


	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}