#include <stdio.h>
int linearSearch(int arr[], int s, int e, int x)
{
    if (s > e)
    {
        return -1;
    }
    else
    {
        if (arr[s] == x)
        {
            return s;
        }
        linearSearch(arr, s + 1, e, x);
    }
}

int main()
{
    int arr[10000];
    int n;
    printf("Enter the size of array \n");
    scanf("%d", &n);
    printf("Enter the array elements \n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the search element ");
    int x;
    scanf("%d", &x);
    int p = linearSearch(arr, 0, n - 1, x);
    if (p != -1)
    {
        printf("the element is present at %d position ", p);
    }
    else
    {
        printf("the element is not present in this array");
    }
    return 0;

    return 0;
}