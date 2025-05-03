//c code for static and dynamic implementation of stack with primitive operations


#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

// Push operation
void push(int value) {
    if (top >= MAX - 1)
        printf("Stack Overflow! Cannot push %d\n", value);
    else {
        stack[++top] = value;
        printf("%d pushed to stack.\n", value);
    }
}

// Pop operation
int pop() {
    if (top < 0) {
        printf("Stack Underflow! Cannot pop.\n");
        return -1;
    } else {
        return stack[top--];
    }
}

// Peek operation
int peek() {
    if (top < 0) {
        printf("Stack is empty!\n");
        return -1;
    } else {
        return stack[top];
    }
}

// Display operation
void display() {
    if (top < 0)
        printf("Stack is empty!\n");
    else {
        printf("Stack elements (top to bottom): ");
        for (int i = top; i >= 0; i--)
            printf("%d ", stack[i]);
        printf("\n");
    }
}

// Main function: Menu-driven
int main() {
    int choice, value;

    do {
        printf("\n--- Stack Menu ---\n");
        printf("1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;

            case 2:
                value = pop();
                if (value != -1)
                    printf("Popped: %d\n", value);
                break;

            case 3:
                value = peek();
                if (value != -1)
                    printf("Top element: %d\n", value);
                break;

            case 4:
                display();
                break;

            case 5:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}
