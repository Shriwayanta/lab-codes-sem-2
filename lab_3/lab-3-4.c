// c program to implement iterative bineary search using function


#include <stdio.h>

// Function to perform iterative binary search
int binarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1, mid;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == target)
            return mid;  // Target found, return index
        else if (arr[mid] < target)
            low = mid + 1;  // Search right half
        else
            high = mid - 1; // Search left half
    }

    return -1;  // Target not found
}

int main() {
    int arr[100], n, i, target, result;

    // Input: number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid array size.\n");
        return 1;
    }

    // Input: sorted array elements
    printf("Enter %d elements in ascending order:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Input: target element to search
    printf("Enter the element to search: ");
    scanf("%d", &target);

    // Call binary search function
    result = binarySearch(arr, n, target);

    // Output result
    if (result != -1)
        printf("Element %d found at position %d (index %d).\n", target, result + 1, result);
    else
        printf("Element %d not found in the array.\n", target);

    return 0;
}
