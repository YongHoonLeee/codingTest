#include<iostream>
#include<string>
using namespace std;

int main(int argc, char** argv)
{
	bool a,b;
	a = true;
	b = false;
	cout << "a :" << a << ", b :" << b << endl;
	a = true;
	a == a;
	cout << "a :" << a << ", b :" << b << endl;
	a = true;
	a != a;
	cout << "a :" << a << ", b :" << b << endl;
	a = true;
	a = !a;
	cout << "a :" << a << ", b :" << b << endl;

	int c = 1;
	cout << ~c << endl;
	cout << !c << endl;

	cout << "commit Test" << endl;
	getchar();
	getchar(); return 0;
}