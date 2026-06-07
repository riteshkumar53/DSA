// pivot index (724)

#include <bits/stdc++.h>
using namespace std;

int pivot_index(vector<int> vec)
{
    int n = vec.size();
    int left = 0;
    int right = n - 1;
    int sum1 = vec[0];
    int sum2 = vec[n - 1];

    for(int i=0;i<n-1;i++)
    {
        sum1+=vec[i+1];
        sum2+=vec[n-2-i];
    }

    if(sum1-vec[0]==0)
    {
        return 0;
    }

    if(sum2-vec[n-1]==0)
    {
        return n-1;
    }

    sum1=vec[0];
    sum2=vec[n-1];

    while (left < right)
    {
        if (sum1 > sum2)
        {
            sum2 += vec[right - 1];
            right--;
        }

        if (sum2 > sum1)
        {
            sum1 += vec[left + 1];
            left++;
        }
        if (sum1 == sum2 && right - left == 2)
        {
            left = left + 1;
            return left;
        }

        if (sum1 == sum2 && right - left != 2)
        {
            sum1 += vec[left + 1];
            left++;
        }
    }
    return -1;
}

int main()
{
    vector<int> vec = {2,1,-1};
    int x = pivot_index(vec);
    if (x!=-1)
    {
        cout << "Pivot index at index:" << x;
    }
    else
        cout << "no pivot index";
    return 0;
}