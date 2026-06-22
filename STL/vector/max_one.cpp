//LeetCode 485 — Max Consecutive Ones

#include <bits/stdc++.h>
using namespace std;

int max_consecutive(vector<int> &vec)
{
    int n=vec.size();
    int one=0;
    int max_one=0;
    for(int i=0;i<n;i++)
    {
        if(vec[i]==0)
        {
            one=0;
            continue;
        }
        one++;
        max_one=max(one,max_one);
    }
    return max_one;
}

int main()
{
    vector<int> vec={1,0,1,1};
    cout<<max_consecutive(vec);
    return 0;
}