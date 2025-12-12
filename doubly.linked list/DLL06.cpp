//swap first and second node

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

// Swap first and second node
void swapFirstSecond() {
    if (first == NULL || first->next == NULL)
        return;  // No swap needed

    Node* temp = first;         // first node
    Node* ttemp = first->next;  // second node
    Node* p = ttemp->next;      // third node (could be NULL)

    // Swap temp and ttemp
    ttemp->prev = NULL;
    ttemp->next = temp;

    temp->prev = ttemp;
    temp->next = p;

    if (p != NULL)
        p->prev = temp;

    first = ttemp;  // Update head
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

    swapFirstSecond();

    cout << "\nAfter swapping first and second:\n";
    printList();  // Output: 20 10 30 40

    return 0;
}