// C code for  inserting & deleting elements from an array

#include <stdio.h>

int main() {
    int arr[100];
    int n, i, pos, val, choice;

    // Input: size and elements of the array
    printf("Enter the number of elements (max 100): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid size.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Menu for operation choice
    printf("\nChoose operation:\n");
    printf("1. Insert an element\n");
    printf("2. Delete an element\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        // INSERTION
        if (n >= 100) {
            printf("Array is full, can't insert.\n");
            return 1;
        }

        printf("Enter the position to insert (1 to %d): ", n + 1);
        scanf("%d", &pos);

        if (pos < 1 || pos > n + 1) {
            printf("Invalid position.\n");
            return 1;
        }

        printf("Enter the value to insert: ");
        scanf("%d", &val);

        // Shift elements to the right
        for (i = n; i >= pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos - 1] = val;
        n++;  // Increase size

        printf("Array after insertion:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");

    } else if (choice == 2) {
        // DELETION
        if (n == 0) {
            printf("Array is empty, can't delete.\n");
            return 1;
        }

        printf("Enter the position to delete (1 to %d): ", n);
        scanf("%d", &pos);

        if (pos < 1 || pos > n) {
            printf("Invalid position.\n");
            return 1;
        }

        // Shift elements to the left
        for (i = pos - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;  // Decrease size

        printf("Array after deletion:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");

    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
