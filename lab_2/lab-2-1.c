// C code to find the sum of all elements of the array

#include <stdio.h>

int main() {
    int n, i;
    int arr[100];  
    int sum = 0;

    // Input: number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Basic size check
    if (n <= 0 || n > 100) {
        printf("Invalid array size.\n");
        return 1;
    }

    // Input: elements of the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];  // Add to sum while reading input
    }

    // Output: sum of elements
    printf("The sum of all elements in the array is: %d\n", sum);

    return 0;
}
