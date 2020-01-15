#include<iostream>
#include<string>
using namespace std;

int main(int argc, char** argv)
{
	
	
		string temp;
		cin >> temp;
		for (int i = 0; i < temp.size(); i++)
			cout << temp[i] - 64 << " ";
		cout << endl;
	return 0;
}