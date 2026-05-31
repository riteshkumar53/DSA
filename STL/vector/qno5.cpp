//Move All Zeros to End //leetcode 283

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec = {0, 1, 0, 2, 0};
    int j=0;
    for(int i=0;i<vec.size();i++)
    {
        if(vec[i]!=0)
        {
            swap(vec[i],vec[j]);
            j++;
        }
    }
    for(int val:vec)
    {
        cout<<val<<" ";
    }
    return 0;
}