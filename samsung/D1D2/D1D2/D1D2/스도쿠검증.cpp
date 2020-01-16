#include<iostream>
using namespace std; 


int checkrow(int(*arr)[9]) {
	int sum = 0;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			sum += arr[i][j];
		}
		if (sum != 45)
			return i;
		sum = 0;
	}
	return -1; //없다는 뜻.
}
int checkcol(int(*arr)[9]) {
	int sum = 0;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			sum += arr[j][i];
		}
		if (sum != 45)
			return i;
		sum = 0;
	}
	return -1; //없다는 뜻.
}

int checksqure(int(*arr)[9])
{
	int sum = 0;
	for (int i = 0; i < 9; i += 3)
	{
		for (int j = 0; j < 9; j += 3)
		{
			for (int z = i; z < i + 3; z++)
			{
				for (int h = j; h < j + 3; h++)
				{
					sum += arr[z][h];
				}
			}
			if (sum != 45)
				return i;
			sum = 0;
		}
	}
	return -1; //없다는 뜻.
}

void arrcin(int(*arr)[9]) {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++)
			cin >> arr[i][j];
	}
}

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int arr[9][9];
		arrcin(arr);
		int col, row,squre;
		int answer;
		col = checkcol(arr);
		row = checkrow(arr);
		squre = checksqure(arr);
		if (col == -1 && row==-1&&squre==-1)
			answer = 1;
		else
			answer = 0;
		cout << "#" << test_case << " " << answer << endl;
	}
	return 0;
}