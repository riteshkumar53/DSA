// LeetCode 53 — Maximum Subarray

#include <bits/stdc++.h>
using namespace std;

//brute
void max_subarray(vector<int> vec)
{
    int max_sum=INT_MIN;
    int n=vec.size();
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=vec[j];
            max_sum=max(sum,max_sum);
        }
    }

    cout<<max_sum<<" "<<endl;
}

//optimal
void Max_subarray(vector<int> vec)
{
    int currentsum=vec[0];
    int maxsum=INT_MIN;

    for(int i=0;i<vec.size();i++)
    {
        currentsum=max(vec[i],currentsum+vec[i]);
        maxsum=max(currentsum,maxsum);
    }

    cout<<maxsum<<" "<<endl;
}

int main()
{
    vector<int> vec={1,-3,6,-5,9,2,6,-5,6};
    max_subarray(vec);
    Max_subarray(vec);
    return 0;
}