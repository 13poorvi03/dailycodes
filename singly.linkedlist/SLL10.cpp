//insert a node at middle of linked list

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

// Insert node in the middle (after 50th node)
void insertInMiddle(int x) {
    if (first == NULL) {
        createFirst(x);
        return;
    }

    // Traverse to 50th node
    temp = first;
    for (int i = 1; i < 50; i++) {
        if (temp->next != NULL)
            temp = temp->next;
    }

    // Insert after temp
    ttemp = new Node;
    ttemp->data = x;
    ttemp->next = temp->next;
    temp->next = ttemp;
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
    createFirst(1);  // First node

    // Add 99 more nodes to make 100 total
    for (int i = 2; i <= 100; i++) {
        addNodeAtEnd(i);
    }

    cout << "Before insertion:\n";
    printList();

    insertInMiddle(999);  // Insert 999 after 50th node

    cout << "\nAfter insertion:\n";
    printList();

    return 0;
}