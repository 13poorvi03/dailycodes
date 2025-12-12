//add a node st start

#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* first = NULL;

// Insert at start
void insertAtStart(int x) {
    Node* temp = new Node;  // new node
    temp->data = x;

    if (first == NULL) {
        temp->next = temp;  // circular link to itself
        first = temp;
        return;
    }

    Node* ttemp = first;
    while (ttemp->next != first) {
        ttemp = ttemp->next;  // reach last node
    }

    temp->next = first;
    ttemp->next = temp;
    first = temp;
}

// Print circular list
void printList() {
    if (first == NULL) return;

    Node* p = first;
    do {
        cout << p->data << " ";
        p = p->next;
    } while (p != first);
    cout << endl;
}

// Main
int main() {
    insertAtStart(30);
    insertAtStart(20);
    insertAtStart(10);

    cout << "Circular Singly Linked List:\n";
    printList();  // Output: 10 20 30

    return 0;
}