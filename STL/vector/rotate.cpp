// rotate array //189

#include <bits/stdc++.h>
using namespace std;

// not optimal

// vector<int> rotate_array(vector<int> vec, int k)
// {
//     int i=0;
//     vector<int> ans(vec.size());
//     for(int i=0;i<vec.size();i++)
//     {
//         ans[(vec.size()-k+i)%vec.size()]=vec[i];
//     }
//     return ans;
// }

void rotate_array(vector<int>& vec, int k)
{
    int n = vec.size();

    k = k % n;

    reverse(vec.begin(), vec.end());

    reverse(vec.begin(), vec.begin() + k);

    reverse(vec.begin() + k, vec.end());
}

int main()
{
    vector<int> vec={1,2,3,4,5,6,7,8,9,10};
    rotate_array(vec, 3);
    for(int val:vec)
    {
        cout<<val<<" ";
    }
    return 0;
}