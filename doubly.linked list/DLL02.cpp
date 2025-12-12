//insert node at end

#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

Node* first = NULL;

// Insert at end using ttemp for traversal and temp for new node
void insertAtEnd(int x) {
    Node* temp = new Node;  // temp is new node
    temp->data = x;
    temp->next = NULL;

    if (first == NULL) {
        temp->prev = NULL;
        first = temp;
        return;
    }

    Node* ttemp = first;  // ttemp is for traversal
    while (ttemp->next != NULL) {
        ttemp = ttemp->next;
    }

    ttemp->next = temp;
    temp->prev = ttemp;
}

// Print list forward
void printList() {
    Node* ttemp = first;
    while (ttemp != NULL) {
        cout << ttemp->data << " ";
        ttemp = ttemp->next;
    }
    cout << endl;
}

// Main function
int main() {
    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(30);

    cout << "Doubly Linked List:\n";
    printList();  // Output: 10 20 30

    return 0;
}