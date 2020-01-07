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

// algorithm 의 find() 를 쓸때는 vector 보다 set이 훨씬 더 빠르다.
// 이렇게나 많이 차이가 날 줄 몰랐는데 지금 생각해보니
// find 이후에 erase 함수가 더 문제였던것 같다. vector 는 중간요소의 삽입삭제가 
// 많아진다면 확실히 많이 느려진다는걸 알 수 있던 문제였다.

//solve2 함수는 multimap을 활용해서 풀어보았다. second를 f -> t 시키는 방법으로.