// C code for printing all unique elements in an array

#include <stdio.h>

int main() {
    int arr[100];
    int n, i, j, count;

    // Input: number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid array size.\n");
        return 1;
    }

    // Input: array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nUnique elements in the array are:\n");

    for (i = 0; i < n; i++) {
        count = 0;

        // Count occurrences of arr[i]
        for (j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        // If count is 1, it's unique
        if (count == 1) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");
    return 0;
}
