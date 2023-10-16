// Bora Sevim
// 22.10.2021
// LabAssignment#2 P2

#include <iostream>
using namespace std;

int main() {
	char c;

	cout << "Enter a character:";
	cin >> c;

	if (islower(c)) {
		c = toupper(c);
		cout << c;
	}

	else if (isupper(c)) {
		c = tolower(c);
		cout << c;
	}

	else if (isalpha(c) == 0) {
		cout << "You did not enter a character.\n";
	}
}