// Bora Sevim 1306210013
// Veri yapıları 1. ödev

#include <iostream>
#include <stdlib.h>
using namespace std;

int stack[100], top = -1, foundIndex;
bool isFound;

void push(int value) {
  if (top >= 99) {
    cout << "Stack overflow" << endl;
  } else {
    top++;
    stack[top] = value;
  }
}

void search(int value) {
  for (int i = 0; i <= top; i++)
    if (value == stack[i]) {
      isFound = true;
      foundIndex = i;
      cout << value << " is the " << foundIndex + 1 << ". value of the stack";
      break;
    }

  if (!isFound) {
    cout << "The value " << value << " has not been found.";
  }
}

int main() {
  srand(time(NULL));

  for (int j = 1; j <= 100; j++) {
    int number = rand() % 1000 + 1;
    push(number);
  }

  search(120); // test
}
