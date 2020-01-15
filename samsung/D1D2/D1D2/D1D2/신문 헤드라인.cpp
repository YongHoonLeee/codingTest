#include<iostream>
#include<string>
using namespace std;

int main(int argc, char** argv)
{
	string headLine;
	cin >> headLine;

	for (int i = 0; i < headLine.size(); i++)
	{
		if (headLine[i] > 96)
			headLine[i] = headLine[i] - 32;
		else
			continue;
	}
	cout << headLine << endl;
	getchar(); getchar();
	return 0;
}