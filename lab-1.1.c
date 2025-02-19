/*c program to find the largest element in an array*/

//method one- largest element in an array using for loop

#include <stdio.h>
int main()
{
    int n, i, largest;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    largest = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    printf("Largest element in the array is: %d", largest);
    return 0;
}
