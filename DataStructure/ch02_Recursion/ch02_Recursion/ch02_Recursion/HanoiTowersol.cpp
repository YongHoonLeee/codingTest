#include<iostream>
using namespace std; 

void Hanoi(int num, char from, char by, char to)
{
	if (num == 1)
		cout << "���� 1�� " << from << "����" << to << "�� �̵�" << endl;
	else
	{
		Hanoi(num - 1, from, to, by);
		cout << "���� " << num << "�� " << from << "����" << to << "�� �̵�" << endl;
		Hanoi(num - 1, by, from, to);
	}
}

int main()
{
	Hanoi(4, 'A', 'B', 'C');
	getchar(); return 0; 
}
//�� �� �����ؼ� Ȯ���� �����ϰ� �Ѿ��.