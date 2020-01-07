#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> heights) {
	vector<int> answer;
	for (int i = heights.size()-1; i >0; i--){
		for (int j = i - 1; j >= 0;j--) {
			if (heights[j] > heights[i]) {
				answer.push_back(j + 1);
				break;
			}
			else if (j == 0)
				answer.push_back(0);
		}
	}
	answer.push_back(0);
	reverse(answer.begin(), answer.end());
	return answer;
}

int main() {
	vector<int> h;
	h.push_back(6);
	h.push_back(9);
	h.push_back(5);
	h.push_back(7);
	h.push_back(4);
	vector<int> answer(solution(h));
	for (int i = 0; i < answer.size();i++) {
		cout << answer[i] << " ";
	}
	cout << endl;

	getchar(); return 0; 
}

//이게 왜 hash 문제인지 잘 모르겠지만 풀었다.