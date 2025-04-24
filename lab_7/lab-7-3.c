// c program to find the factorial of number using stack


#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int val) {
    if (top == MAX - 1)
        printf("Stack Overflow\n");
    else
        stack[++top] = val;
}

int pop() {
    if (top == -1)
        return 1; // multiplying by 1 has no effect
    else
        return stack[top--];
}

int factorial(int n) {
    for (int i = n; i >= 1; i--)
        push(i);

    int result = 1;
    while (top != -1)
        result *= pop();

    return result;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Factorial not defined for negative numbers.\n");
    else
        printf("Factorial of %d is %d\n", n, factorial(n));

    return 0;
}
