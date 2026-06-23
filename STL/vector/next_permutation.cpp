//Next Permutation(31)

#include <bits/stdc++.h>
using namespace std;

void next_permutation(vector<int> arr)
{
    int n=arr.size();
    int k=0;
    int swapped=0;
    for(int i=n-1;i>0;i--)
    {
        if(arr[i]>arr[i-1])
        {
            k=i-1;
            break;
        }
    }

    for(int i=n-1;i>k;i--)
    {
        if(arr[k]<arr[i])
        {
            swap(arr[k],arr[i]);
            reverse(arr.begin()+k+1,arr.end());
            swapped=1;
            break;
        }
    }
        if(!swapped)
        reverse(arr.begin(),arr.end());

    for(int x:arr)
    {
        cout<<x<<" ";
    }
}

int main()
{
    vector<int> vec={1,2,7,4,3,1};
    next_permutation(vec);
    return 0;
}