//c code for static and dynamic implementation of stack with primitive operations



//static using array
#include <stdio.h>
#define MAX 100

int stack[MAX], top = -1;

void push_static(int value) {
    if (top == MAX - 1)
        printf("Stack Overflow!\n");
    else
        stack[++top] = value;
}

void pop_static() {
    if (top == -1)
        printf("Stack Underflow!\n");
    else
        printf("Popped: %d\n", stack[top--]);
}

void peek_static() {
    if (top == -1)
        printf("Stack is empty.\n");
    else
        printf("Top element: %d\n", stack[top]);
}

void display_static() {
    if (top == -1) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = top; i >= 0; i--)
        printf("%d ", stack[i]);
    printf("\n");
}



//dynamic using linked list
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* top_dynamic = NULL;

void push_dynamic(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = top_dynamic;
    top_dynamic = newNode;
}

void pop_dynamic() {
    if (top_dynamic == NULL) {
        printf("Stack Underflow!\n");
        return;
    }
    Node* temp = top_dynamic;
    printf("Popped: %d\n", top_dynamic->data);
    top_dynamic = top_dynamic->next;
    free(temp);
}

void peek_dynamic() {
    if (top_dynamic == NULL)
        printf("Stack is empty.\n");
    else
        printf("Top element: %d\n", top_dynamic->data);
}

void display_dynamic() {
    if (top_dynamic == NULL) {
        printf("Stack is empty.\n");
        return;
    }
    Node* temp = top_dynamic;
    printf("Stack elements: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

