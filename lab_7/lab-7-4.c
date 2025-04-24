// c program for static an ddynamic implementation of linear search


#include <stdio.h>
#include <stdlib.h>

// Linear search function
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int main() {
    int choice, n, key, index;

    printf("Choose type:\n1. Static Array\n2. Dynamic Array\nEnter choice: ");
    scanf("%d", &choice);

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr_static[100];       // for static
    int* arr_dynamic = NULL;   // for dynamic

    if (choice == 1) {
        printf("Enter %d elements (static): ", n);
        for (int i = 0; i < n; i++)
            scanf("%d", &arr_static[i]);

        printf("Enter element to search: ");
        scanf("%d", &key);

        index = linearSearch(arr_static, n, key);
    } else if (choice == 2) {
        arr_dynamic = (int*)malloc(n * sizeof(int));
        if (arr_dynamic == NULL) {
            printf("Memory allocation failed.\n");
            return 1;
        }

        printf("Enter %d elements (dynamic): ", n);
        for (int i = 0; i < n; i++)
            scanf("%d", &arr_dynamic[i]);

        printf("Enter element to search: ");
        scanf("%d", &key);

        index = linearSearch(arr_dynamic, n, key);

        free(arr_dynamic);
    } else {
        printf("Invalid choice.\n");
        return 1;
    }

    if (index != -1)
        printf("Element found at index %d.\n", index);
    else
        printf("Element not found.\n");

    return 0;
}
