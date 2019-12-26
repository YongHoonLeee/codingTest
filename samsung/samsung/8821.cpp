/////////////////////////////////////////////////////////////////////////////////////////////
// 기본 제공코드는 임의 수정해도 관계 없습니다. 단, 입출력 포맷 주의
// 아래 표준 입출력 예제 필요시 참고하세요.
// 표준 입력 예제
// int a;
// float b, c;
// double d, e, f;
// char g;
// char var[256];
// long long AB;
// cin >> a;                            // int 변수 1개 입력받는 예제
// cin >> b >> c;                       // float 변수 2개 입력받는 예제 
// cin >> d >> e >> f;                  // double 변수 3개 입력받는 예제
// cin >> g;                            // char 변수 1개 입력받는 예제
// cin >> var;                          // 문자열 1개 입력받는 예제
// cin >> AB;                           // long long 변수 1개 입력받는 예제
/////////////////////////////////////////////////////////////////////////////////////////////
// 표준 출력 예제
// int a = 0;                            
// float b = 1.0, c = 2.0;               
// double d = 3.0, e = 0.0; f = 1.0;
// char g = 'b';
// char var[256] = "ABCDEFG";
// long long AB = 12345678901234567L;
// cout << a;                           // int 변수 1개 출력하는 예제
// cout << b << " " << c;               // float 변수 2개 출력하는 예제
// cout << d << " " << e << " " << f;   // double 변수 3개 출력하는 예제
// cout << g;                           // char 변수 1개 출력하는 예제
// cout << var;                         // 문자열 1개 출력하는 예제
// cout << AB;                          // long long 변수 1개 출력하는 예제
/////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
#include<string>
#include <cmath>
using namespace std;
void check(int n,int(*arr)[10]) {
	for (int i = 0; i < 10; i++) {
		if (n == i&&arr[1][i] == 0) {
			arr[1][i] = 1;
		}
		else if (n == i&&arr[1][i] == 1)
			arr[1][i] = 0;
	}
}
int whatsum(int(*arr)[10]) {
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		if (arr[1][i] == 1)
			sum++;
	}
	return sum;
}
int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin >> T;
	string s;
	int n;
	int arr[2][10] = { 0,1,2,3,4,5,6,7,8,9,0,0,0,0,0,0,0,0,0,0 };
	for (test_case = 1; test_case <= T; ++test_case)
	{
		
		cin >> s;
		long sTon = atoi(s.c_str());
		int mok;
		for (int i = 0; i < s.size(); i++) {
			int j = s.size();
			mok= sTon /pow(10, j-1-i);
			 sTon = sTon %int (pow(10, j-i- 1));
			check(mok, arr);
		}
				cout << "#" << test_case << " " << whatsum(arr) << endl;
				for (int i = 0; i < 10; i++)
					arr[1][i] = 0;
	}
	getchar(); getchar();
	return 0;
}

#if 0
#include<iostream>
#include<string>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		bool Check[10] = { false };
		for (int i = 0; i < 10; i++) {
			Check[i] = false;
		}
		string var;
		cin >> var;
		int Count = 0;
		for (int i = 0; i < var.length(); i++) {
			Check[int(var[Count]) - 48] = !Check[int(var[Count]) - 48];
			Count++;
		}
		Count = 0;
		for (int i = 0; i < 10; i++) {
			if (Check[i]) {
				Count++;
			}
		}
		cout << "#" << test_case << " " << Count << endl;
	}
	return 0;
}
#endif // 0
