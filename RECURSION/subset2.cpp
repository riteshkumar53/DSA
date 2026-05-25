// for non unique elements

#include <iostream>
using namespace std;

void subset(int arr[], int subset2[], int n, int size, int i)
{
    if (n == i)
    {
        for (int j = 0; j < size; j++)
        {
            cout << subset2[j] << " ";
        }
        cout << "\n";
        return;
    }

    subset2[size] = arr[i];

    // include
    subset(arr, subset2, n, size + 1, i + 1); // print all include ones;

    int idx = i + 1;

    // exclude
    while (idx < n && arr[idx] == arr[idx - 1]) // not print exclude ones;
    {
        idx++;
    }

    subset(arr, subset2, n, size, idx);

    return;
}

int *countsort(int *arr, int n)
{
    int max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    int count[max + 1];

    for (int i = 0; i < max + 1; i++)
    {
        count[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }

    for (int i = 1; i < max + 1; i++)
    {
        count[i] += count[i - 1];
    }

    int ans[n];

    for (int i = n - 1; i >= 0; i--)
    {
        ans[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = ans[i];
    }
}
int main()
{
    int arr[] = {1, 5, 2, 2}; // first sort out all elements
    int n = sizeof(arr) / sizeof(arr[0]);
    countsort(arr, n);
    int subset2[n];
    subset(arr, subset2, n, 0, 0);
    return 0;
}