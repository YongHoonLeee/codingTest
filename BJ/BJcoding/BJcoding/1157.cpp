#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int findMax(int arr[26]) {
	sort(arr, arr + 26);

	if (arr[24] == arr[25]) //������ �ִ밪�� ��������� �������̴�.
		return -1;
	else 
		return arr[25];		//�ƴ϶�� �ִ밪�� ���� �߿��Ѱ� �ִ밪�� �ε����� �ƴ϶����.
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
	copy(AlpabetArray, AlpabetArray + 26, alpabetArray);//sort �� ���� ��������.

	int Max;

	Max = findMax(alpabetArray);	//���� ��ȿ�����̱� �ѵ�.

	if (Max == -1)
		cout << "?" << endl; 
	else
	{
		for (int i = 0; i < 26; i++) { // �ִ밪�� �ε��� (���ĺ�) �� ã�Ƽ� 
			if (AlpabetArray[i] == Max)
			{
				char a = i + 65; //�빮�ڷ� ������� �� ���.
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

// �Ʊ� Ǭ 10809�� ������ �״�� ���. �ٸ� �� �迭�� �빮�� �ҹ��ڸ� ��� �޾Ҵ�.
// �׸��� sort �ϸ� �迭�̶� �׷��� ������ �ٲ�°� ó�� �˾Ҵ�.
// �׷��� ������ �����صΰ� findMax �� �Ͽ���. ��Դ�.