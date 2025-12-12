//insert a node at starting of linked list 

#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

Node* head = NULL;

// Insert at beginning
void insertAtStart(int x) {
    Node* newNode = new Node;
    newNode->data = x;
    newNode->prev = NULL;
    newNode->next = head;

    if (head != NULL)
        head->prev = newNode;

    head = newNode;
}

// Print list forward
void printList() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Main function
int main() {
    insertAtStart(30);
    insertAtStart(20);
    insertAtStart(10);

    cout << "Doubly Linked List:\n";
    printList();  // Output: 10 20 30

    return 0;
}