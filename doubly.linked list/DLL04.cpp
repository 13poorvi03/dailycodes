//swap first and last node

#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

Node* first = NULL;

// Insert at end
void insertAtEnd(int x) {
    Node* temp = new Node;
    temp->data = x;
    temp->next = NULL;

    if (first == NULL) {
        temp->prev = NULL;
        first = temp;
        return;
    }

    Node* ttemp = first;
    while (ttemp->next != NULL) {
        ttemp = ttemp->next;
    }

    ttemp->next = temp;
    temp->prev = ttemp;
}

// Swap first and last node
void swapFirstLast() {
    if (first == NULL || first->next == NULL)
        return;  // No swap needed

    Node* temp = first;         // first node
    Node* ttemp = first;        // will reach last node

    while (ttemp->next != NULL) {
        ttemp = ttemp->next;
    }

    // If only two nodes
    if (temp->next == ttemp) {
        temp->next = NULL;
        temp->prev = ttemp;
        ttemp->prev = NULL;
        ttemp->next = temp;
        first = ttemp;
        return;
    }

    // Use p to hold temp->next
    Node* p = temp->next;
    Node* lastPrev = ttemp->prev;

    // Rewire temp (first node)
    temp->next = NULL;
    temp->prev = lastPrev;
    lastPrev->next = temp;

    // Rewire ttemp (last node)
    ttemp->next = p;
    ttemp->prev = NULL;
    p->prev = ttemp;

    // Update head
    first = ttemp;
}

// Print list
void printList() {
    Node* ttemp = first;
    while (ttemp != NULL) {
        cout << ttemp->data << " ";
        ttemp = ttemp->next;
    }
    cout << endl;
}

// Main
int main() {
    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(30);
    insertAtEnd(40);

    cout << "Before swap:\n";
    printList();  // Output: 10 20 30 40

    swapFirstLast();

    cout << "\nAfter swap:\n";
    printList();  // Output: 40 20 30 10

    return 0;
}