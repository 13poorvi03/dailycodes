//insert a node in middle of list

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

// Insert in middle
void insertInMiddle(int x) {
    if (first == NULL || first->next == NULL) {
        insertAtEnd(x);  // If list is empty or has one node
        return;
    }

    // Count nodes
    int count = 0;
    Node* ttemp = first;
    while (ttemp != NULL) {
        count++;
        ttemp = ttemp->next;
    }

    int mid = count / 2;

    // Traverse to mid-th node
    ttemp = first;
    for (int i = 1; i < mid; i++) {
        ttemp = ttemp->next;
    }

    // Create new node
    Node* p = new Node;
    p->data = x;

    // Insert after ttemp
    p->next = ttemp->next;
    p->prev = ttemp;

    if (ttemp->next != NULL)
        ttemp->next->prev = p;

    ttemp->next = p;
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

    cout << "Before inserting in middle:\n";
    printList();  // Output: 10 20 30 40

    insertInMiddle(25);  // Insert 25 in middle

    cout << "\nAfter inserting in middle:\n";
    printList();  // Output: 10 20 25 30 40

    return 0;
}