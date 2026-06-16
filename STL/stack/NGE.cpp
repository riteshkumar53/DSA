//Next Greater Element I (LeetCode 496)

#include <bits/stdc++.h>
using namespace std;

vector<int> NGE(vector<int> nums1,vector<int> nums2)
{
    stack<int> stack;
    unordered_map<int,int> map;

    for(int i=nums2.size()-1;i>=0;i--)
    {
        while(!stack.empty() && stack.top()<=nums2[i])
        {
            stack.pop();
        }

        if(stack.empty())
        {
            map[nums2[i]]=-1;
        }
        else
            map[nums2[i]]=stack.top();


        stack.push(nums2[i]);    
    }

    vector<int> ans;

    for(int x:nums1)
    {
        ans.push_back(map[x]);
    }
    return ans;
}

int main()
{
    vector<int> nums1={1,2,4};
    vector<int> nums2={9,1,4,3,2,1};

    

    vector<int> vec;
    vec=NGE(nums1,nums2);

    for(int x:vec)
    {
        cout<<x<<" ";
    }
    return 0;
}