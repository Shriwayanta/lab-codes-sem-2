/*c program to convert -
a) infix to postfix
b) infix to perfix
c) prefix to postfix
*/ 


#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char stack[100]; int top = -1;

void push(char c) { stack[++top] = c; }
char pop() { return stack[top--]; }
char peek() { return stack[top]; }

int precedence(char c) {
    if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return 0;
}

void reverse(char* str) {
    int l = 0, r = strlen(str) - 1;
    while (l < r) {
        char t = str[l]; str[l] = str[r]; str[r] = t;
        l++; r--;
    }
}

void infixToPostfix(char* infix, char* postfix) {
    int j = 0;
    for (int i = 0; i < strlen(infix); i++) {
        char c = infix[i];
        if (isalnum(c)) postfix[j++] = c;
        else if (c == '(') push(c);
        else if (c == ')') {
            while (peek() != '(') postfix[j++] = pop();
            pop();
        } else {
            while (top != -1 && precedence(peek()) >= precedence(c))
                postfix[j++] = pop();
            push(c);
        }
    }
    while (top != -1) postfix[j++] = pop();
    postfix[j] = '\0';
}

void infixToPrefix(char* infix, char* prefix) {
    reverse(infix);
    for (int i = 0; infix[i]; i++) {
        if (infix[i] == '(') infix[i] = ')';
        else if (infix[i] == ')') infix[i] = '(';
    }
    char temp[100];
    infixToPostfix(infix, temp);
    reverse(temp);
    strcpy(prefix, temp);
}

void prefixToPostfix(char* prefix, char* postfix) {
    char* stack[100]; int t = -1;
    for (int i = strlen(prefix) - 1; i >= 0; i--) {
        char c = prefix[i];
        if (isalnum(c)) {
            char* op = (char*)malloc(2); op[0] = c; op[1] = '\0';
            stack[++t] = op;
        } else {
            char* a = stack[t--];
            char* b = stack[t--];
            char* exp = (char*)malloc(strlen(a)+strlen(b)+2);
            sprintf(exp, "%s%s%c", a, b, c);
            stack[++t] = exp;
        }
    }
    strcpy(postfix, stack[t]);
}

int main() {
    char infix[100], postfix[100], prefix[100], pre[100], post2[100];

    printf("Enter infix: ");
    scanf("%s", infix);
    infixToPostfix(infix, postfix);
    infixToPrefix(infix, prefix);

    printf("Postfix: %s\n", postfix);
    printf("Prefix : %s\n", prefix);

    printf("Enter prefix: ");
    scanf("%s", pre);
    prefixToPostfix(pre, post2);
    printf("Prefix to Postfix: %s\n", post2);
    return 0;
}
