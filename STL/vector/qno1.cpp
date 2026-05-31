// Reverse a Vector

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
           reverse(arr.begin() , arr.end()-1);

    //        int n = arr.size();

    // for(int i = 0; i < n / 2; i++)
    // {
    //     swap(*(arr.begin() + i), *(arr.rbegin() + i));
    // }
    for(int val:arr)
    {
        cout<<val<<" ";
    }
    return 0;
}