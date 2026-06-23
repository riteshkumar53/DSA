//search insert problem (35)

#include <bits/stdc++.h>
using namespace std;

int binarysearch(vector<int> arr, int key)
{
    int n=arr.size();
    int high = n - 1, low = 0, mid;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if ((arr[mid]) == key)
        {
            cout<<"the element is at "<<mid;
        }
        else if ((arr[mid]) > key)
        {
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    

   return low;
}

int main()
{
    vector<int> vec={0,2,5,7,9,10,34,68,90};
    cout<<binarysearch(vec,91);
    return 0;
}