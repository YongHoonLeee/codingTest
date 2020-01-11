#include <string>
#include <vector>
#include<iostream>
#include<algorithm>     //ing...
using namespace std;
int chkall(vector<int> arr) {
	int chk = 0;
	for (auto i : arr) {
		if (i < 10)
			chk += 1;
		else if (10 < i&&i < 100)
			chk += 2;
		else if (i > 100)
			chk += 3;
		else if (i == 1000)
			chk += 4;
	}
	return chk;
}
int chk(int i) {
	if (i == 0)
		return 0;
	else if (i < 10)
		return 1;
	else if (10 <= i&&i < 100)
		return 2;
	else if (i > 100)
		return 3;
	else if (i == 1000)
		return 4;
}
string solution(vector<int> numbers) {
	string answer = "";
	vector<string> iToc;
	vector<int> temp;
	temp.reserve(numbers.size());
	for (int i = 0; i < numbers.size(); i++)
		temp.push_back(numbers[i] * pow(10, 4 - chk(numbers[i])));

//다 1000 단위로 만들어서 비교해본다. 하지만 자리수가 적은걸 우선배치한다.
	for()
	
	 
	return answer;
}

int main()
{
	vector<int> temp;
	temp.push_back(6);
	temp.push_back(10);
	temp.push_back(2);
	string A;
	A=solution(temp);
	cout << A << endl;
	getchar(); return 0; 
}