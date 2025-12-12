//swap first and second node

#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node *first = NULL, *temp;

// Create the first node
void createFirst(int x) {
    first = new Node;
    first->data = x;
    first->next = NULL;
}

// Add node at end
void addNodeAtEnd(int x) {
    temp = first;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    Node* newNode = new Node;
    newNode->data = x;
    newNode->next = NULL;
    temp->next = newNode;
}

// Swap first and second node by pointer adjustment
void swapFirstSecond() {
    if (first == NULL || first->next == NULL) {
        cout << "Swap not possible. Less than 2 nodes.\n";
        return;
    }

    Node* second = first->next;

    // Adjust pointers
    first->next = second->next;
    second->next = first;
    first = second;
}

// Print the list
void printList() {
    temp = first;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Main function
int main() {
    createFirst(10);
    addNodeAtEnd(20);
    addNodeAtEnd(30);
    addNodeAtEnd(40);

    cout << "Before swap:\n";
    printList();  // Output: 10 20 30 40

    swapFirstSecond();

    cout << "\nAfter swap:\n";
    printList();  // Output: 20 10 30 40

    return 0;
}