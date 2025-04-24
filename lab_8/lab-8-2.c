// c program to implement preorder tree traversal


#include <stdio.h>
#include <stdlib.h>

// Define a node structure
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Preorder traversal
void preorder(struct Node* root) {
    if (root == NULL)
        return;
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

// Build tree from user input
struct Node* buildTree() {
    int value;
    printf("Enter node value (-1 for NULL): ");
    scanf("%d", &value);
    
    if (value == -1)
        return NULL;

    struct Node* root = createNode(value);
    printf("Enter left child of %d:\n", value);
    root->left = buildTree();
    printf("Enter right child of %d:\n", value);
    root->right = buildTree();

    return root;
}

int main() {
    printf("Build the binary tree:\n");
    struct Node* root = buildTree();

    printf("\nPreorder Traversal: ");
    preorder(root);
    printf("\n");

    return 0;
}
