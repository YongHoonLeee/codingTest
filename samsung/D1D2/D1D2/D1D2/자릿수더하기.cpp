#include<iostream>
#include<string>
using namespace std;

int main(int argc, char** argv)
{
	string test_case;
int sum = 0;
	cin >> test_case;
	for (int i = 0; i < test_case.size(); i++)
		sum += test_case.at(i)-48; //문자열의 한 자리수를 int 형처럼 -48을 해주면 숫자가됨.
	
	cout << sum << endl;
	return 0;
}