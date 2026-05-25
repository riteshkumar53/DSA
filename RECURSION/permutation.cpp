#include<iostream>
using namespace std;

void permutation(int arr[],int n,int idx)
{
    if(idx == n)
    {
        for(int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }

        cout<<"\n";

        return;
    }

    for(int i=idx;i<n;i++)
    {
        swap(arr[idx],arr[i]);

        permutation(arr,n,idx+1);

        swap(arr[idx],arr[i]); //swap when backtrack for getting original array
    }

    return;
}

int main()
{
    int arr[]={1,2,3};
    permutation(arr,3,0);
    return 0;
}