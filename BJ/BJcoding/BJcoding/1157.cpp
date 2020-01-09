#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int findMax(int arr[26]) {
	sort(arr, arr + 26);

	if (arr[24] == arr[25]) //정렬후 최대값이 여러개라면 같을것이다.
		return -1;
	else 
		return arr[25];		//아니라면 최대값을 리턴 중요한건 최대값의 인덱스가 아니라는점.
}
void solve(string s)
{
	//ASCII(a~z) = 97~122 ,ASCII(A~Z) = 65~90
	int AlpabetArray[26] = { 0 };

	for (unsigned int i = 0; i < s.size(); i++)
	{
		if (s[i] - 0 > 91)
			AlpabetArray[s[i] - 97]++;
		else
			AlpabetArray[s[i] - 65]++;
	}
	int alpabetArray[26];
	copy(AlpabetArray, AlpabetArray + 26, alpabetArray);//sort 을 위한 원본복사.

	int Max;

	Max = findMax(alpabetArray);	//뭔가 비효율적이긴 한데.

	if (Max == -1)
		cout << "?" << endl; 
	else
	{
		for (int i = 0; i < 26; i++) { // 최대값의 인덱스 (알파벳) 을 찾아서 
			if (AlpabetArray[i] == Max)
			{
				char a = i + 65; //대문자로 만들어준 뒤 출력.
				cout << a << endl;
			}
		}
	}
}

int main() {
	string S;
	cin >> S;
	solve(S);
	getchar(); getchar();
	return 0;
}

// 아까 푼 10809번 문제를 그대로 썼다. 다만 한 배열로 대문자 소문자를 모두 받았다.
// 그리고 sort 하면 배열이라 그런지 원본도 바뀌는걸 처음 알았다.
// 그래서 원본을 복사해두고 findMax 를 하였다. 재밋다.