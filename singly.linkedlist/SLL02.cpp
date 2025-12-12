///INSERT AT STARTING 

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

// Add node at the beginning
void addNodeAtStart(int x) {
    temp = new Node;
    temp->data = x;
    temp->next = first;
    first = temp;
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
    printList();

    // Add more nodes at start
    x = 20;
    addNodeAtStart(x);
    printList();

    x = 30;
    addNodeAtStart(x);
    printList();

    return 0;
}