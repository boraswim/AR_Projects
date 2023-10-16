// Bora Sevim 1306210013
// Veri yapıları 2. ödev

#include <iostream>
#include <stdlib.h>
using namespace std;

int queue[100], top = 0, foundIndex;
bool isFound;

void enqueue(int value) {
  if (top >= 99) {
    cout << "Queue overflow" << endl;
  } else {
    queue[top] = value;
    top++;
  }
}

void search(int value) {
  for (int i = 0; i <= top; i++)
    if (value == queue[i]) {
      isFound = true;
      foundIndex = i;
      cout << value << " is the " << foundIndex + 1 << ". value of the queue";
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
    enqueue(number);
  }

  search(120); // test
}
