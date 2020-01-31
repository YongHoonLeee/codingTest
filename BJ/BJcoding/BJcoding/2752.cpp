#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 

int main()
{
	int temp;
	vector<int>v;
	v.reserve(3);
	for (int i = 0; i < 3; i++) {
		cin >> temp;
		v.push_back(temp);
	}
	sort(v.begin(), v.end());
	
	for (int i = 0; i < 3; i++)
		cout << v[i] << " ";

	cout << endl;

	 return 0; 

}