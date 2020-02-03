#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 

int main() {
		int test_case;
		cin >> test_case;
		
		for(int i=0;i<test_case;i++)
		{
			int n;
			cin >> n;
			vector<int>rus;
			rus.reserve(n);
			vector<int>kor;
			kor.reserve(n);
			int temp;
			for (int i = 0; i < n; i++) {
				cin >> temp;
				rus.push_back(temp);
			}
			for (int i = 0; i < n; i++) {
				cin >> temp;
				kor.push_back(temp);
			}
			sort(rus.begin(), rus.end());
			sort(kor.begin(), kor.end());
			//오름차순이니까 0에서부터 시작
			int ri = 0, ki = 0;
			int ans = 0;

			while (ri < n && ki < n) {
				if (rus[ri] <= kor[ki]) {
					ans++; ri++; ki++;
				}
				else ki++;
			}
			cout << ans << endl;
		}

		getchar(); return 0; 
	}
