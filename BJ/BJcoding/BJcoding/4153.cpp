#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 

int main() {
	while (1) {
		int a, b, c;
		cin >> a >> b >> c;
		vector<int>v;
		v.reserve(3);
		v.push_back(a);
		v.push_back(b);
		v.push_back(c);
		sort(v.begin(), v.end());
		if ((v[0]* v[0] + v[1]* v[1] == v[2]* v[2])&&a!=0&&b!=0&&c!=0)
			cout << "right" << endl;
		else if (a == 0 && b == 0 && c == 0) {
			break;
		}
		else
			cout << "wrong" << endl;
	}
	return 0;
}