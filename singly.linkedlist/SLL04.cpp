//insert a node after a given node

#include<iostream>
using namespace std;

// Define Node structure
struct Node {
    int data;
    Node* next;
};

// Global pointers
Node *first = NULL, *temp, *ttemp;

// Create the first node
void createFirst(int x) {
    first = new Node;
    first->data = x;
    first->next = NULL;
}

// Insert after a given node (using pointer p)
void insertAfterNode(Node* p, int x) {
    if (p == NULL) {
        cout << "Pointer p is NULL. Cannot insert.\n";
        return;
    }

    ttemp = new Node;
    ttemp->data = x;
    ttemp->next = p->next;
    p->next = ttemp;
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

    x = 10;
    createFirst(x);         // First node
    printList();            // Output: 10

    x = 20;
    insertAfterNode(first, x);  // Insert after first node
    printList();            // Output: 10 20

    x = 30;
    insertAfterNode(first->next, x);  // Insert after second node
    printList();            // Output: 10 20 30

    return 0;
}