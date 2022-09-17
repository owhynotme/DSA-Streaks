#include <iostream>
using namespace std;

void reverse(int arr[], int size)
{
    int start = 0, end = size - 1, temp = 0;
    while (start <= end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    // print(arr, size);
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5}, temp = 0;
    int size = sizeof(arr) / sizeof(arr[0]);

    // cout<<size;
    reverse(arr, size);
    print(arr, size);
}