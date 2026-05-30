#include <iostream>
using namespace std;

#define n 3
void combsum(int arr[], int sum[], int target, int i,int size)
{
    if (target == 0)
    {
        for (int j = 0; j < size; j++)
        {
            cout << sum[j] << " ";
        }
        cout << "\n";
        return;
    }

    if (target < 0 || i == n)
    {
        return;
    }

    sum[size] = arr[i];

    // single include

    //combsum(arr, sum, target - arr[i], i + 1, size + 1); // if vector use

    // multiple include

    combsum(arr, sum, target - arr[i], i, size + 1);

    // exclude , backtracking

    combsum(arr, sum, target, i + 1, size);

    return;
}

int main()
{
    int arr[] = {2, 3, 4};
    int target = 8;
    int sum[100];

    combsum(arr, sum, target, 0, 0);

    return 0;
}