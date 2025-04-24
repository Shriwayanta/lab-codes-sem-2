//c program to implement linear search(native) without function

#include <stdio.h>

int main() {
    int arr[100];
    int n, i, target, found = 0;

    // Input: size of array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid array size.\n");
        return 1;
    }

    // Input: elements of the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Input: element to search
    printf("Enter the element to search: ");
    scanf("%d", &target);

    // Linear search logic
    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("Element %d found at position %d (index %d).\n", target, i + 1, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
