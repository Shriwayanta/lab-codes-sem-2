// c program to implement recursive bineary search using function


#include <stdio.h>

// Function to perform recursive binary search
int binarySearch(int arr[], int low, int high, int target) {
    if (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
            return mid;  // Element found
        else if (arr[mid] > target)
            return binarySearch(arr, low, mid - 1, target);  // Search in left half
        else
            return binarySearch(arr, mid + 1, high, target); // Search in right half
    }
    return -1;  // Element not found
}

int main() {
    int arr[100];
    int n, i, target, result;

    // Input: number of elements
    printf("Enter the number of elements (max 100): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid array size.\n");
        return 1;
    }

    // Input: sorted elements of the array
    printf("Enter %d sorted elements in ascending order:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Input: element to search
    printf("Enter the element to search: ");
    scanf("%d", &target);

    // Call the recursive binary search function
    result = binarySearch(arr, 0, n - 1, target);

    // Output result
    if (result != -1) {
        printf("Element %d found at position %d (index %d).\n", target, result + 1, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
