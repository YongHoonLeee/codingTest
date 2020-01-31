#include<iostream>
#include<vector>
using namespace std; 

int main()
{
	int n;
	cin >> n;
	int cnt = 0;
	int temp;
	vector<int>v;
	v.reserve(n);

	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		v.push_back(temp);
	}
	int key;
	cin >> key;
	for (auto iter :v) {
		if (iter == key)
			cnt++;
	}

	cout << cnt << endl;
	return 0;
}