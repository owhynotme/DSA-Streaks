#include <iostream>
using namespace std;

void Max2(int arr[], int n)
{
    int max = INT16_MIN, ans, ans2;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            ans = arr[i];
        if (arr[i - 1] > max)
        {
            ans2 = arr[i - 1];
        }
    }
    cout << ans << " " << ans2<<endl;
}

int main()
{
    int n = 3, arr[] = {2, 1, 2};
    int n2 = 5, arr2[] = {1, 2, 3, 4, 5};

    cout << "\ntestcase 1\n";
    Max2(arr, n);

    cout << "\ntestcase 2\n";
    Max2(arr2, n2);
}