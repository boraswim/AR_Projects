// Bora Sevim
// 19.11.2021
// LabAssignment#3 P1

#include <iostream>
using namespace std;

int main(){

	int n1;
	int n2;
	int ch;
	bool loop = true;

	while (loop) {
		cout << "\n\n**** MY MENU ****\n1. Addition\n2. Substraction\n3. Division\n4. Multiplication\n5. Modulo\n6. Exit\n";
		cout << "\nEnter your choice:";
		cin >> ch;
		
		switch (ch) {
			case 1:
				cout << "Enter the first integer:";
				cin >> n1;
				cout << "Enter the second integer:";
				cin >> n2;
				cout << n1 << "+" << n2 << "=" << n1 + n2;
				break;
			case 2:
				cout << "Enter the first integer:";
				cin >> n1;
				cout << "Enter the second integer:";
				cin >> n2;
				cout << n1 << "-" << n2 << "=" << n1 - n2;
				break;
			case 3:
				cout << "Enter the first integer:";
				cin >> n1;
				cout << "Enter the second integer:";
				cin >> n2;
				if (n2 == 0) {
					cout << "A number cannot be divided by zero.";
					break;
				}
				else {
					float div = float(n1) / float(n2);
					cout << n1 << "/" << n2 << "=" << div;
					break;
				}
			case 4:
				cout << "Enter the first integer:";
				cin >> n1;
				cout << "Enter the second integer:";
				cin >> n2;
				cout << n1 << "*" << n2 << "=" << n1 * n2;
				break;
			case 5:
				cout << "Enter the first integer:";
				cin >> n1;
				cout << "Enter the second integer:";
				cin >> n2;
				if (n2 == 0) {
					cout << "A number cannot be modulo by zero.";
					break;
				}
				else {
					cout << n1 << "%" << n2 << "=" << n1 % n2;
					break;
				}
			case 6:
				cout << "Goodbye.";
				loop = false;
				break;
			default:
				cout << "Wrong input. Try again.";
		}
	}
}