// Bora Sevim
// 15.10.2021
// LabAssignment#1 P1

#include <iostream>
using namespace std;

int main() {

	string name;
	string surname;
	int age;

	cout << "Please write your name:";
	cin >> name;
	cout << "Your surname:";
	cin >> surname;
	cout << "Your age:";
	cin >> age;
	cout << "Hi " <<name<<" "<<surname<<"!"<<endl;
	cout << "Your birth year is " << 2021 - age;

}