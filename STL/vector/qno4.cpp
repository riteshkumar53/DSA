// Check if Vector is Sorted // similar to 1752 leetcode question

#include <bits/stdc++.h>
using namespace std;

// bool sort(vector<int> vec)
// {
//     for(int i=0;i<vec.size();i++)
//     {
//         if(vec[i]>vec[i+1])
//         {
//             return false;
//         }
//     }
//     return true;
// }

int main()
{
    vector<int> vec={1,2,3,4,5,6};
    // if(sort(vec))
    // {
    //     cout<<"sorted"<<endl;
    // }
    // else
    //     cout<<"not sorted";

    if(is_sorted(vec.begin(),vec.end()))
    {
        cout<<"sorted"<<endl;
    }
    else    
        cout<<"not sorted";
    return 0;
}