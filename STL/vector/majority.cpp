// Majority Element (LeetCode 169)

#include <bits/stdc++.h>
using namespace std;

int majority(vector<int> vec)
{
    for(int i=0;i<vec.size();i++)
    {
        int num=vec[i];
        int count=0;
        for(int j=i;j<vec.size();j++)
        {
            if(num == vec[j])
            {
                count++;
            }
        }
        if(count == vec.size()/2)
        {
            return num;
        }
    }
}

int main()
{
    vector<int> vec={1,2,3,4,1,1};
    cout<<majority(vec);
    return 0;
}