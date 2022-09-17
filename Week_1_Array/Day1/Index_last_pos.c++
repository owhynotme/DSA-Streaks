#include <iostream>
using namespace std;

// void insertend(int arr[],size){
//     if
// }

void print(int arr[], int size, int element)
{
    arr[size - 1] = element;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3};
    int sizeofarr = 6, sizeofarr2 = 4;
    // int size = sizeof(arr) / sizeof(arr[0]);

    // cout << "\nArray 1\n";
    // print(arr, sizeofarr, 99);
    cout << "\nArray 2\n";
    print(arr2, sizeofarr2, 50);
}
