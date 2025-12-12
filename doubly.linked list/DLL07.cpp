//swap nth and mth node

#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

Node* first = NULL;

// Insert at end
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

// Swap nth and mth node
void swapNthMth(int n, int m) {
    if (n == m) return;

    Node* temp = first;
    Node* ttemp = first;
    int i = 1;

    // Move temp to nth node
    while (temp != NULL && i < n) {
        temp = temp->next;
        i++;
    }

    i = 1;
    // Move ttemp to mth node
    while (ttemp != NULL && i < m) {
        ttemp = ttemp->next;
        i++;
    }

    if (temp == NULL || ttemp == NULL) {
        cout << "Invalid positions.\n";
        return;
    }

    // If nodes are adjacent
    if (temp->next == ttemp) {
        Node* p = temp->prev;
        Node* q = ttemp->next;

        if (p) p->next = ttemp;
        if (q) q->prev = temp;

        ttemp->prev = p;
        ttemp->next = temp;

        temp->prev = ttemp;
        temp->next = q;

        if (first == temp) first = ttemp;
        return;
    }

    if (ttemp->next == temp) {
        Node* p = ttemp->prev;
        Node* q = temp->next;

        if (p) p->next = temp;
        if (q) q->prev = ttemp;

        temp->prev = p;
        temp->next = ttemp;

        ttemp->prev = temp;
        ttemp->next = q;

        if (first == ttemp) first = temp;
        return;
    }

    // Swap non-adjacent nodes
    Node* p = temp->prev;
    Node* q = temp->next;
    Node* r = ttemp->prev;
    Node* s = ttemp->next;

    if (p) p->next = ttemp;
    if (q) q->prev = ttemp;
    if (r) r->next = temp;
    if (s) s->prev = temp;

    swap(temp->prev, ttemp->prev);
    swap(temp->next, ttemp->next);

    if (first == temp) first = ttemp;
    else if (first == ttemp) first = temp;
}

// Print list
void printList() {
    Node* ttemp = first;
    while (ttemp != NULL) {
        cout << ttemp->data << " ";
        ttemp = ttemp->next;
    }
    cout << endl;
}

// Main
int main() {
    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(30);
    insertAtEnd(40);
    insertAtEnd(50);

    cout << "Before swap:\n";
    printList();  // Output: 10 20 30 40 50

    swapNthMth(2, 5);  // Swap 20 and 50

    cout << "\nAfter swap:\n";
    printList();  // Output: 10 50 30 40 20

    return 0;
}