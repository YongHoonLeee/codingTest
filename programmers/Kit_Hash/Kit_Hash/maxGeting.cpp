#include <string>
#include <vector>
#include<iostream>
#include<algorithm>
using namespace std;
vector<int> duplication(vector<int>& a, vector <int>& b) {
	vector<int>::iterator iter;
	vector<int>::iterator iter_b;
	vector<int> c = a; //a의 값 복사
	for (iter_b = b.begin(); iter_b != b.end(); iter_b++) {
		for (iter = c.begin(); iter != c.end();) {
			if (*iter == *iter_b)
				iter = c.erase(iter); //중복 제거
			else
				iter++;
		}
	}
	return c; //결과 반환
}
bool hasTwo(int lostMan, vector<int>& yebel)
{
	int cnt;
	for (auto iter : yebel)
		if (iter == lostMan)
			cnt++;

	if (cnt == 2)
		return true;
	else
		return false;
}
int solution(int n, vector<int> lost, vector<int> reserve) {
	int answer = 0;
	vector<int>temp = lost;
	vector<int> hasMan;
	for (int i = 1; i <= n; i++)
		hasMan.push_back(i);
	lost = duplication(lost, reserve);
	reserve = duplication(reserve, temp);
	hasMan = (duplication(hasMan, lost));
	vector<int> yebel;
	for (int i = 0; i < reserve.size(); i++)
	{
		if (reserve[i] == 1)
			yebel.push_back(2);
		else if (reserve[i] == n)
			yebel.push_back(n - 1);
		else
		{
			yebel.push_back(reserve[i] - 1);
			yebel.push_back(reserve[i] + 1);
		}
	}
	for (int i = 0; i < lost.size(); i++)
	{
		if (hasTwo(lost[i], yebel))
		{
			hasMan.push_back(lost[i]);
		}
	}


	return answer;
}

int main() {
	int n = 5;
	vector<int>lost = { 2,4 };
	vector<int>reserve = { 1,3,5 };
	int answer = solution(n, lost, reserve);

	getchar(); return 0;
}