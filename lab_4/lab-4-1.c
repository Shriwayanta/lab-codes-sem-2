// c program to implement optimised bubble sort


#include <stdio.h>

int main() {
    int arr[100];
    int n, i, j, temp;
    int swapped;

    // Input: number of elements
    printf("Enter the number of elements (max 100): ");
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

    // Optimized Bubble Sort
    for (i = 0; i < n - 1; i++) {
        swapped = 0;  // Reset swapped flag

        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapped = 1;  // Set swapped flag
            }
        }

        // If no two elements were swapped, array is sorted
        if (!swapped) {
            break;
        }
    }

    // Output: sorted array
    printf("Sorted array in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
