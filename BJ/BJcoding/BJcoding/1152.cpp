#include<iostream>
#include<string>
using namespace std;
int main()
{
	int cnt = 0;
	string temp;
	getline(cin, temp);
	if (temp.size() == 1 && temp[0] == ' ') //temp = ' ' �ϰ�� ����ó��
	{
		cout << 0;
		return 0;
	}
	if (temp.front() == 32) // �յڷ� ������ �ִٸ� ����ó��
		temp.erase(0, 1);
	if (temp.back() == 32)
		temp.pop_back();
	for (auto iter : temp) { //����� cnt �� 1���ؼ� ��.
		if (iter == 32)
			cnt++;
	}
	cnt++;
	cout << cnt << endl;
	return 0;
}
//temp = ' ' �� ��츦 �������ؼ� �ι��̳� Ʋ�ȴ�. �׻� ����ó���� ������.