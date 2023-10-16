//Bora Sevim
//Veri yapıları 3. ödev

#include <iostream>
#include <stdlib.h>
using namespace std;

int queue[100], stack[100], topq = 0, tops = -1;

void enqueue(int value) {
  if (topq >= 100) {
    cout << "Queue overflow" << endl;
  } else {
    queue[topq] = value;
    topq++;
  }
}

void push(int value) {
  if (tops >= 100) {
    cout << "Stack overflow" << endl;
  } else {
    tops++;
    stack[tops] = value;
  }
}

int main() {
  srand(time(NULL));

  for (int j = 1; j <= 100; j++) {
    int number = rand() % 1000 + 1;
    enqueue(number);
  }

  for (int i = 0; i <= 100; i++) {
    push(queue[i]);
  }

}