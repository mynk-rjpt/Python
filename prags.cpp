#include <iostream>
using namespace std;
int minswap1(int *arr, int n, int k)
{
    int count = 0;
    int swap = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= k)
        {
            if (arr[count] != arr[i])
                swap++;
            count++;
        }
    }
    return swap;
}

int minswap2(int *arr, int n, int k)
{
    int count2 = n - 1;
    int swap2 = 0;
    for (int j = n - 1; j >= 0; j--)
    {
        if (arr[j] <= k)
        {
            if (arr[count2] != arr[j])
                swap2++;
            count2--;
        }
    }
    return swap2;
}

int main()
{
    int a, b;
    int arr[] = {10, 12, 20, 20, 5, 19, 19, 12, 1, 20, 1};
    // int arr[] = {4, 5, 6, 7, 3, 2, 1};
    // int arr[] = {1, 2, 3, 7, 6, 5, 4};
    // int arr[] = {2, 1, 5, 6, 3};

    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 1;

    a = minswap1(arr, n, k);
    b = minswap2(arr, n, k);
    cout << a << "\n";
    cout << b << "\n";
    cout << min(a, b);
}
