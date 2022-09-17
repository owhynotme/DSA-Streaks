#include <iostream>
using namespace std;

int insertpos(int arr[], int size, int capacity, int element, int pos)
{
    if (pos >= capacity)
    {
        return -1;
    }
    for (int i = size - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = element;
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
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]), capacity = 6;
    int element = 90, pos = 5;
    cout << "Before\n";
    print(arr, size);
    cout << endl;
    // cout<<endl;
    insertpos(arr, size, capacity, element, pos);
    cout << "After\n";
    // size + ;
    print(arr, size + 1);
}