// Bora Sevim
// 15.10.2021
// Lab Assignment#1 P2

#include <iostream>
using namespace std;

int main() {
	float f;
	float c;
	float k;

	cout << "Please enter a temperature value (Fahrenheit):";
	cin >> f;
	c = (f - 32) * 5 / 9;
	k = c + 273.15;
	cout << "Conversion result: " << f << " Fahrenheit = " << c << " Celcius = " << k << " Kelvin";
}

