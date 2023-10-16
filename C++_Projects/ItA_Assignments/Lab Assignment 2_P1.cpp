// Bora Sevim
// 22.10.2021
// Lab Assignment#2 P1

#include <iostream>
using namespace std;

 int main() {

	char op;
	int num1;
	int num2;

	cout << "Choose the operation you want to use\n";
	cout << "\ta for addition, s for substraction, d for division, p for product and m for modulo:";
	cin >> op;

	cout << "Enter the first number:";
	cin >> num1;

	cout << "Enter the second number:";
	cin >> num2;
	
	if (op == 'a') {
		cout << "The addition of the two given numbers is " << num1 + num2 << ".";
	}

	else if (op == 's') {
		cout << "The substraction of the two given numbers is " << num1 - num2 << ".";
	}

	else if (op == 'd') {
		if (num2 == 0) {
			cout << "A number cannot be divided by zero.\n";
			return 0;
		}
		float res = float(num1) / float(num2);
		cout << "The division of the two given numbers is " << res << ".";
	}

	else if (op == 'p') {
		cout << "The product of the two given numbers is " << num1 * num2 << ".";
	}

	else if (op == 'm') {
		if (num2 == 0) {
			cout << "A number cannot be modular by zero.\n";
			return 0;
		}
		cout << "The modulo of the two given numbers is " << num1 % num2 << ".";
	}
}