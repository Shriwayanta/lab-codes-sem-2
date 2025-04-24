// c program to implement postorder tree traversal


#include <stdio.h>
#include <stdlib.h>

// Define a node structure
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Build tree using user input (recursive)
struct Node* buildTree() {
    int val;
    printf("Enter data (-1 for NULL): ");
    scanf("%d", &val);

    if (val == -1)
        return NULL;

    struct Node* root = createNode(val);
    printf("Enter left child of %d:\n", val);
    root->left = buildTree();

    printf("Enter right child of %d:\n", val);
    root->right = buildTree();

    return root;
}

// Postorder Traversal: Left -> Right -> Root
void postOrder(struct Node* root) {
    if (root == NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    printf("%d ", root->data);
}

// Main function
int main() {
    printf("Build your binary tree:\n");
    struct Node* root = buildTree();

    printf("Postorder Traversal: ");
    postOrder(root);
    printf("\n");

    return 0;
}
