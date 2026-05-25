#include <iostream>
using namespace std;

int issorted(int arr[], int n)
{
    if(n==0)
    {
        return 1;   
    }

    if(arr[n]<arr[n-1])
    {
        return 0;
    }

    return issorted(arr,n-1);

}

int main()
{
    int arr[] = {1, 2, 3, 9, 7};
    if (issorted(arr, 4))
    {
        cout<<"is sorted";
    }
    else
        cout<<"not sorted:";
        return 0;
}