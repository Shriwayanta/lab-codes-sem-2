//c program to implement recursive linerar search using function


#include <stdio.h>

// Recursive linear search function
int linearSearch(int arr[], int size, int target, int index) {
    if (index >= size) {
        return -1;  // Base case: not found
    }
    if (arr[index] == target) {
        return index;  // Element found
    }
    return linearSearch(arr, size, target, index + 1);  // Recursive call
}

int main() {
    int arr[100];
    int n, target, i, result;

    // Input: size of array
    printf("Enter the number of elements: ");
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
    printf("Enter the element to search for: ");
    scanf("%d", &target);

    // Call recursive linear search
    result = linearSearch(arr, n, target, 0);

    // Output result
    if (result != -1) {
        printf("Element %d found at position %d (index %d).\n", target, result + 1, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
