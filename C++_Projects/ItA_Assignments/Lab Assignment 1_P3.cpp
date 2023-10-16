//Bora Sevim
//15.10.2021
//Lab Assignment#1 P3

#include <iostream>
using namespace std;

int main() {
	int n1;
	int n2;
	float div;
	cout << "Please enter the first number:";
	cin >> n1;
	cout << "Please enter the second number:";
	cin >> n2;
	div = float(n1) / float(n2);
	cout << n1 << "+" << n2 << "=" << n1 + n2<<endl;
	cout << n1 << "-"<< n2 << "=" << n1 - n2<<endl;
	cout << n1 << "*" << n2 << "=" << n1 * n2<<endl;
	cout << n1 << "/" << n2 << "=" << div;
}