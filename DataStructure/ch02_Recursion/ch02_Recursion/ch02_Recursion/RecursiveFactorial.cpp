#include<iostream>
using namespace std; 

int Factorial(int n)
{
	if (n == 0)
		return 1;
	else
		return n*Factorial(n - 1);
}

int main()
{
	for(int i=0;i<5;i++)
	cout << Factorial(i) << endl;
	getchar(); return 0; 
}