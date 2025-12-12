//swap first and last node


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

// Swap first and last node (pointer adjustment only)
void swapFirstLast() {
    if (first == NULL || first->next == NULL) return;

    Node* prevLast = NULL;
    Node* last = first;

    // Traverse to last node
    while (last->next != NULL) {
        prevLast = last;
        last = last->next;
    }

    // If only two nodes
    if (first->next == last) {
        last->next = first;
        first->next = NULL;
        first = last;
        return;
    }

    // General case
    Node* second = first->next;

    prevLast->next = first;
    first->next = NULL;
    last->next = second;
    first = last;
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
    createFirst(1);

    // Add nodes 2 to 100
    for (int i = 2; i <= 100; i++) {
        addNodeAtEnd(i);
    }

    cout << "Before swap:\n";
    printList();  // Output: 1 2 3 ... 100

    swapFirstLast();

    cout << "\nAfter swap:\n";
    printList();  // Output: 100 2 3 ... 99 1

    return 0;
}