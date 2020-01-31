#include<iostream>
using namespace std;

int main() {
	int hours, min;
	cin >> hours >> min;
	if (min < 45&&hours!=0) {
		hours--;
		min += 60;
		min -= 45;
	}
	else if (hours == 0 && min < 45) {
		hours=23;
		min += 60;
		min -= 45;
	}
	else {
		min -= 45;
	}
	cout << hours << " " << min;
	
	return 0;
}