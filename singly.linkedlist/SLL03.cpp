//insert at end

#include<iostream>
using namespace std;

// Define Node structure
struct Node {
    int data;
    Node* next;
};

// Declare global pointers
Node *first = NULL, *temp, *ttemp;

// Create the first node
void createFirst(int x) {
    first = new Node;
    first->data = x;
    first->next = NULL;
}

// Add node at the end
void addNodeAtEnd(int x) {
    temp = first;

    // Traverse to the last node
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // Create new node
    ttemp = new Node;
    ttemp->data = x;
    ttemp->next = NULL;

    // Link last node to new node
    temp->next = ttemp;
}

// Print the list
void printList() {
    ttemp = first;
    while (ttemp != NULL) {
        cout << ttemp->data << " ";
        ttemp = ttemp->next;
    }
    cout << endl;
}

// Main function
int main() {
    int x;

    // Create first node
    x = 10;
    createFirst(x);
    printList();  // Output: 10

    // Add more nodes at end
    x = 20;
    addNodeAtEnd(x);
    printList();  // Output: 10 20

    x = 30;
    addNodeAtEnd(x);
    printList();  // Output: 10 20 30

    return 0;
}