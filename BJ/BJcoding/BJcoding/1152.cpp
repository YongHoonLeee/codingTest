#include<iostream>
#include<string>
using namespace std;
int main()
{
	int cnt = 0;
	string temp;
	getline(cin, temp);
	if (temp.size() == 1 && temp[0] == ' ') //temp = ' ' 일경우 예외처리
	{
		cout << 0;
		return 0;
	}
	if (temp.front() == 32) // 앞뒤로 공백이 있다면 예외처리
		temp.erase(0, 1);
	if (temp.back() == 32)
		temp.pop_back();
	for (auto iter : temp) { //공백수 cnt 후 1더해서 끝.
		if (iter == 32)
			cnt++;
	}
	cnt++;
	cout << cnt << endl;
	return 0;
}
//temp = ' ' 일 경우를 생각못해서 두번이나 틀렸다. 항상 예외처리를 잘하자.