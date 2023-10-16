// Bora Sevim
// Veri yapıları 4. ödev

#include <iostream>
#include <stdlib.h>
using namespace std;

class Node {

public:
  int data;
  Node *next;

  Node(int data) {
    this->data = data;
    this->next = NULL;
  }
};

class Linkedlist {
public:
  Node *head;

  Linkedlist() { head = NULL; }

  void insertNode(int data) {

    Node *newNode = new Node(data);

    if (head == NULL) {
      head = newNode;
      return;
    }

    Node *temp = head;
    while (temp->next != NULL) {
      temp = temp->next;
    }

    temp->next = newNode;
  }

  void searchList(int value) {
    Node *temp = head;
    int j = 0;
    bool isFound = false;

    if (head == NULL) {
      cout << "Liste boş." << endl;
      return;
    }

    while (temp != NULL) {
      if (temp->data == value) {
        isFound = true;
        cout << value << " değeri " << j + 1 << ". sırada bulundu.";
      }
      j++;
      temp = temp->next;
    }
    if (!isFound) {
      cout << value << " değeri bulunamadı.";
    }
  }
};

int main() {
  srand(time(NULL));
  Linkedlist list;

  for (int i = 1; i <= 100; i++) {
    int number = rand() % 1000 + 1;
    list.insertNode(number);
  }

  list.searchList(12); // test
}