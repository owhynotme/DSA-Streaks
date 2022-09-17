#include <iostream>
using namespace std;

void strongest_neg(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] > arr[i])
        {
            cout << arr[i + 1] << " ";
        }
        else
        {
            cout << arr[i] << " ";
        }
    }
}

int main()
{
    cout << "\nTestcase 1\n";
    int n = 6, arr[] = {1, 2, 2, 3, 4, 5};
    strongest_neg(arr, n);

    cout << "\nTestcase 2\n";
    int n2 = 2, arr2[] = {5, 5};
    strongest_neg(arr2, n2);
}