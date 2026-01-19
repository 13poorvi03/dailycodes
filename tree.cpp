#include <iostream>
using namespace std;

// Define a node structure
struct Node {
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int value) {
        data = value;
        left = right = nullptr;
    }
};

// Example usage
int main() {
    // Create root
    Node* root = new Node(1);

    // Add children
    root->left = new Node(2);
    root->right = new Node(3);

    // Add grandchildren
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Root: " << root->data << endl;
    cout << "Left Child: " << root->left->data << endl;
    cout << "Right Child: " << root->right->data << endl;

    return 0;
}