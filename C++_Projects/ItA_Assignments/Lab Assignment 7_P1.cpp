// Bora Sevim
// 17.12.2021
// LabAssignment#7 P1

#include <iostream>
using namespace std;

bool isprime(int);

int main() {
		bool res;
		int num;
		cout << "Enter an integer:";
		cin >> num;
		res = isprime(num);
		if (res) {
			cout << num << " is a prime number.\n";
		}
		else {
			cout << num << " is not a prime number.\n";
		}
	return 0;
}

bool isprime(int a) {
	if (a == 2) {
		return true;
	}

	else if (a <= 1) {
		return false;
	}

	for (int i = 2; i < a; i++) {
		if (a % i == 0) {
			return false;
		}
	}
}