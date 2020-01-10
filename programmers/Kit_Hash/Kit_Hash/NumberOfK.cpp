#include<iostream>
#include <string>
#include <vector>
#include<algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
	vector<int> answer;
	for (unsigned int iter = 0; iter < commands.size(); iter++)
	{
		int i, j, k;
		i = commands[iter][0];
		j = commands[iter][1];
		k = commands[iter][2];
		vector<int> temp;
		temp.reserve(j - i+1);
		for (int get = i-1; get < j; get++)
			temp.push_back(array[get]);
		sort(temp.begin(), temp.end());
		answer.push_back(temp[k - 1]);
		
		temp.clear();
		temp.resize(0);
	}
	return answer;
}

int main()
{
	
	vector<vector<int>> commands;
	vector<int> n;
	n.reserve(3);
	n.push_back(2); n.push_back(5); n.push_back(3);
	commands.push_back(n);
	n.clear();
	n.push_back(4); n.push_back(4); n.push_back(1);
	commands.push_back(n);
	n.clear();
	n.push_back(1); n.push_back(7); n.push_back(3);
	commands.push_back(n);
	n.clear();
	vector<int>arr;
	arr.reserve(100);
	arr.push_back(1);
	arr.push_back(5);
	arr.push_back(2);
	arr.push_back(6);
	arr.push_back(3);
	arr.push_back(7);
	arr.push_back(4);

	vector<int> result = solution(arr, commands);

	for (auto i : result)
		cout << i << " ";

		cout << endl;

	getchar(); return 0; 
}