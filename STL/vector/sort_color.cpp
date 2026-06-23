// sort colors (75)
//Dutch National Flag Algorithm.

#include <bits/stdc++.h>
using namespace std;

vector<int> sort_colors(vector<int> &nums)
{
    int n = nums.size();
    int low = 0;
    int high = n - 1;
    int mid = 0;
    while (mid <= high)
    {
        if (nums[mid] == 2)
        {
            swap(nums[mid], nums[high]);
            high--;
        }

        if (nums[mid] == 1)
        {
            mid++;
            continue;
        }

        if (nums[mid] == 0)
        {
            swap(nums[mid], nums[low]);
            low++;
            mid++;
        }
    }
    return nums;
}

int main()
{
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    nums=sort_colors(nums);
    for(int val:nums)
    {
        cout<<val<<" ";
    }
    return 0;
}