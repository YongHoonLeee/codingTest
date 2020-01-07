#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
#include<algorithm>
using namespace std; 

string solution(vector<string> participant, vector<string> completion) {
	multiset<string> Sp;
	multiset<string> Sc;
	for (auto iter : participant)
		Sp.insert(iter);
	for (auto iter : completion)
		Sc.insert(iter);

	string answer = "";
	for (auto iter : Sc) {
			Sp.erase(find(Sp.begin(), Sp.end(), iter));
	}
	answer = *Sp.begin();
	return answer;
}
string solution2(vector<string> participant, vector<string> completion) {
	string answer = "";
	multimap<string, bool> goodPersons;
	for (auto iter = participant.begin(); iter != participant.end(); ++iter) {
		goodPersons.insert(make_pair(*iter, false));
	}
	for (auto iter = completion.begin(); iter != completion.end(); ++iter) {
		for (auto jter = goodPersons.begin(); jter != goodPersons.end(); ++jter) {
			if (*iter == jter->first&&jter->second == false) {
				jter->second = true;
				break;
			}
		}
	}
	for (auto iter : goodPersons)
		if (iter.second == false)
			answer = iter.first;
	return answer;
}

int main() {
	vector<string> participant;
	vector<string> completion;
	participant.push_back("mislav");
	participant.push_back("stanko");
	participant.push_back("mislav");
	participant.push_back("ana");

	completion.push_back("stanko");
	completion.push_back("ana");
	completion.push_back("mislav");
	cout << solution(participant,completion) << endl;

	getchar(); return 0; 
}

// algorithm �� find() �� ������ vector ���� set�� �ξ� �� ������.
// �̷��Գ� ���� ���̰� �� �� �����µ� ���� �����غ���
// find ���Ŀ� erase �Լ��� �� ���������� ����. vector �� �߰������ ���Ի����� 
// �������ٸ� Ȯ���� ���� �������ٴ°� �� �� �ִ� ��������.

//solve2 �Լ��� multimap�� Ȱ���ؼ� Ǯ��Ҵ�. second�� f -> t ��Ű�� �������.