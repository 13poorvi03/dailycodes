//swap nth and mth node

#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* first = NULL;

// Create the first node
void createFirst(int x) {
    first = new Node;
    first->data = x;
    first->next = NULL;
}

// Add node at end
void addNodeAtEnd(int x) {
    Node* temp = first;
    while (temp->next != NULL)
        temp = temp->next;

    Node* newNode = new Node;
    newNode->data = x;
    newNode->next = NULL;
    temp->next = newNode;
}

// Swap nth and mth nodes
void swapNthMth(int n, int m) {
    if (n == m) return;

    Node *prevN = NULL, *nodeN = first;
    Node *prevM = NULL, *nodeM = first;

    // Find nth node
    for (int i = 1; nodeN != NULL && i < n; i++) {
        prevN = nodeN;
        nodeN = nodeN->next;
    }

    // Find mth node
    for (int i = 1; nodeM != NULL && i < m; i++) {
        prevM = nodeM;
        nodeM = nodeM->next;
    }

    // If either node is not found
    if (nodeN == NULL || nodeM == NULL) {
        cout << "One of the positions is out of bounds.\n";
        return;
    }

    // If nodeN or nodeM is head
    if (prevN != NULL)
        prevN->next = nodeM;
    else
        first = nodeM;

    if (prevM != NULL)
        prevM->next = nodeN;
    else
        first = nodeN;

    // Swap next pointers
    Node* temp = nodeN->next;
    nodeN->next = nodeM->next;
    nodeM->next = temp;
}

// Print the list
void printList() {
    Node* temp = first;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Main function
int main() {
    createFirst(1);
    for (int i = 2; i <= 100; i++) {
        addNodeAtEnd(i);
    }

    cout << "Before swap:\n";
    printList();

    swapNthMth(1, 100);  // Swap first and last
    // swapNthMth(10, 90);  // Try other positions too

    cout << "\nAfter swap:\n";
    printList();

    return 0;
}