#include<iostream>
#include<string>
using namespace std;

int main(int argc, char** argv)
{
	string test_case;
int sum = 0;
	cin >> test_case;
	for (int i = 0; i < test_case.size(); i++)
		sum += test_case.at(i)-48; //���ڿ��� �� �ڸ����� int ��ó�� -48�� ���ָ� ���ڰ���.
	
	cout << sum << endl;
	return 0;
}