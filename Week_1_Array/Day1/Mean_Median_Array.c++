#include <iostream>
using namespace std;

void linear_sort(int arr[], int size)
{
    int temp = 0, sum = 0;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int medain(int arr[], int size)
{
    int sum = 0, mid = size / 2;
    float ans;
    // for (int i = 0; i < size; i++)
    // {
    if (mid % 2 != 0)
    {
        // cout << arr[mid] << arr[mid + 1];
        ans = (arr[mid] + arr[mid + 1]) / 2;
    }
    else
    {
        ans = arr[mid];
    }
    // }
    return (ans);
}
int mean(int arr[], int size)
{
    int sum = 0, mean;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    mean = sum / size;
    return mean;
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
    cout << "\nTestcase 1\n\n";

    // int arr[] = {1, 2, 19, 28, 5};
    // int size = sizeof(arr) / sizeof(arr[0]), sum;
    // cout << "Before Sort\n";
    // print(arr, size);

    // linear_sort(arr, size); // Sort

    // cout << endl;
    // cout << "\nAfter Sort\n";
    // print(arr, size);
    // cout << endl;
    // // cout << "\nSum " << sum;

    // cout << "\nMedian: " << medain(arr, size);
    // cout << "\nMean: " << mean(arr, size);

    cout << "\n\n-------------Testcase 2---------------\n\n";

    int arr2[] = {2, 8, 3, 4};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << "Before Sort\n";
    print(arr2, size2);

    linear_sort(arr2, size2); // Sort

    cout << endl;
    cout << "\nAfter Sort\n";
    print(arr2, size2);
    cout << endl;
    // cout << "\nSum " << sum;

    cout << "\nMedian: " << medain(arr2, size2);
    // medain(arr2, size2);
    cout << "\nMean: " << mean(arr2, size2);
}