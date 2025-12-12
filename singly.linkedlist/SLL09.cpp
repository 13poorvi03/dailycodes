//inser a node before a given node

#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node *first = NULL, *temp, *ttemp;

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

    ttemp = new Node;
    ttemp->data = x;
    ttemp->next = NULL;
    temp->next = ttemp;
}

// Insert before a node with value `target`
void insertBeforeValue(int target, int x) {
    // Case 1: Insert before first node
    if (first != NULL && first->data == target) {
        ttemp = new Node;
        ttemp->data = x;
        ttemp->next = first;
        first = ttemp;
        return;
    }

    // Case 2: Traverse to find target and its previous
    Node* prev = NULL;
    temp = first;
    while (temp != NULL && temp->data != target) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Target value not found.\n";
        return;
    }

    // Insert new node between prev and temp
    ttemp = new Node;
    ttemp->data = x;
    ttemp->next = temp;
    prev->next = ttemp;
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

    cout << "Before insertion:\n";
    printList();  // Output: 10 20 30 40

    insertBeforeValue(30, 25);  // Insert 25 before 30
    insertBeforeValue(10, 5);   // Insert 5 before 10 (head case)

    cout << "\nAfter insertion:\n";
    printList();  // Output: 5 10 20 25 30 40

    return 0;
}