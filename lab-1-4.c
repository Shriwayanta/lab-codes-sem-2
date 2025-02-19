// method three- largest element in an array using pointers
#include <stdio.h>
int findlargest(int *arr, int size)
{
    int *ptr = arr;
    int max = *ptr;

    for (int i = 1; i < size; i++)
    {
        ptr++;
        if (*ptr > max)
        {
            max = *ptr;
        }
    }
    return max;
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
    int largest = findlargest(arr, n);
    printf("Largest element is : %d", largest);
    return 0;
}
