// C code to copy the elements of one array into another array

#include <stdio.h>

int main() {
    int arr1[100], arr2[100];
    int n, i;

    // Input: size of array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid array size.\n");
        return 1;
    }

    // Input: elements of the first array
    printf("Enter %d elements for the first array:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    // Copying elements from arr1 to arr2
    for (i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }

    // Output: elements of the copied array
    printf("Elements copied to the second array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}
