
#include <stdio.h>

int main() {
    int a;
    printf("Enter 1 or 0: ");
    scanf("%d", &a);
    if (a == 1) {
        printf("true");
    } else if (a == 0) {
        printf("false");
    } else {
        printf("Invalid input");
    }
    return 0;
}