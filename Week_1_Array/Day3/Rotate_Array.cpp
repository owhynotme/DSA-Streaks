#include <iostream>
using namespace std;

int main()
{
    int N = 5, D = 3;
    int arr[] = {2,4,6,8,10,12,14,16,18,20}, ans[N];

    for (int i = 0; i < N; i++)
    {
        ans[(i + D) % N] = arr[i];
    }
    for (int i = 0; i < N; i++)
    {
        cout << ans[i]<<" ";
    }
}