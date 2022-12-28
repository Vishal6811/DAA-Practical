/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
int binarySearch(int arr[], int s, int e, int x)
{
    if (s > e)
    {
        return -1;
    }
    else
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] > x)
        {
            binarySearch(arr, s, mid - 1, x);
        }
        else
        {
            binarySearch(arr, mid + 1, e, x);
        }
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
    int p = binarySearch(arr, 0, n - 1, x);
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