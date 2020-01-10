#include <string>
#include <vector>
#include<iostream>
#include<algorithm>     //ing...
using namespace std;
int chk(vector<int> arr) {
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
int c(int i) {
	if (i < 10)
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
	//iToc.reserve(numbers.size());
	/*for (int i = 0; i < numbers.size(); i++)
		iToc.push_back(to_string( numbers[i]));*/
	//int chknum = chk(numbers);
	vector<int> temp;
	temp.reserve(numbers.size());
	for (int i = 0; i < numbers.size(); i++)
		temp.push_back(numbers[i] * pow(10, 4 - c(numbers[i])));

	sort(temp.begin(), temp.end());
	
	 
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