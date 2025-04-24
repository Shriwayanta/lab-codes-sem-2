//method two - c program to find the largest element in an array using recursion

#include <stdio.h>

int findlargest(int arr[], int n)
{
    if (n == 1)
    {
        return arr[0];
    }
    int max_of_rest = findlargest(arr, n - 1);
    return (arr[n - 1] > max_of_rest) ? arr[n - 1] : max_of_rest;
}

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements in the array:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int largest = findlargest(arr, n);
    printf("The largest element in the array is: %d\n", largest);

    return 0;
}
