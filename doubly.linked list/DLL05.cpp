//insert after a given node

#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

Node* first = NULL;

// Insert at end (to build list)
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

// Insert after a node with value `target`
void insertAfterValue(int target, int x) {
    Node* ttemp = first;

    // Search for target node
    while (ttemp != NULL && ttemp->data != target) {
        ttemp = ttemp->next;
    }

    if (ttemp == NULL) {
        cout << "Target node not found.\n";
        return;
    }

    // Create new node
    Node* temp = new Node;
    temp->data = x;

    // Insert after ttemp
    temp->next = ttemp->next;
    temp->prev = ttemp;

    if (ttemp->next != NULL)
        ttemp->next->prev = temp;

    ttemp->next = temp;
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

    cout << "Before insertion:\n";
    printList();  // Output: 10 20 30

    insertAfterValue(20, 25);  // Insert 25 after 20

    cout << "\nAfter insertion:\n";
    printList();  // Output: 10 20 25 30

    return 0;
}