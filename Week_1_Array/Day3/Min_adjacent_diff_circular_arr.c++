#include <iostream>
using namespace std;

int main()
{

    int n = 7, arr[] = {8, -8, 9, -9, 10, -11, 12};
    int ans[7];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i; j < n; j++)
        {
            ans[i] = arr[i] - arr[j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}
