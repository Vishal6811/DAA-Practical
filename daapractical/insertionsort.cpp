#include <iostream>
using namespace std;
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void insertonSort(int arr[], int n)
{
    for (int j = 1; j < n; j++)
    {
        int i = j - 1;
        int key = arr[j];
        while (i >= 0 && arr[i] > key)
        {
            arr[i + 1] = arr[i];
            i--;
        }
        arr[i + 1] = key;
    }
}
int main()
{
    int arr[1000];
    int n;
    cout << "Enter the array" << endl;
    cin >> n;
    cout << "Enter the array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    insertonSort(arr, n);
    printArray(arr, n);
    return 0;
}