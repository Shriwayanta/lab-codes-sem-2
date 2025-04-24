//method three - c program to find the largest element in an array using function

#include <stdio.h>

void funclargest(int arr[], int n)
{
    int i, largest;

    largest = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    printf("Largest element is %d\n", largest);
}
int main()
{
    int n;
    printf("Enter the number of elements : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements :\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    funclargest(arr, n);
    return 0;
}