//윤년

#include<iostream>

using namespace std;

int main() {

	int year;
	int result;
	
	cin >> year;

	if (year % 4 == 0 && year % 100 != 0) {
		result = 1;
	}
	else if (year % 400 == 0) {
		result = 1;
	} else {
		result = 0;
	}
    
    cout << result;

	return 0;

}