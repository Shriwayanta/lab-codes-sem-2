//c program to implement iterative linear search using function

#include <stdio.h>

// Function for linear search
int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; // Return index if key is found
        }
    }
    return -1; // Return -1 if key is not found
}

int main() {
    int size, key;

    // Ask user for array size
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size]; // Declare array with user-defined size

    // Take array input from user
    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the key to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Perform linear search
    int result = linearSearch(arr, size, key);

    // Display result
    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }

    return 0;
}