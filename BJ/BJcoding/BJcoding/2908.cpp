#include<iostream>
#include<algorithm>
#include<string>
using namespace std; 

int main()
{
	string A;
	string B;
	cin >> A >> B;
	reverse(A.begin(), A.end());
	reverse(B.begin(), B.end());
	
	if (A.compare(B) > 0)
		cout << A << endl;
	else
		cout << B << endl;
	
	return 0;
}//good. 그냥 뒤집어서 바로 문자열 비교.