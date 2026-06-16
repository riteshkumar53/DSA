// 1. Two Sum

// Given an array of integers nums and an integer target, return the indices
// of the two numbers such that they add up to target.
// You may assume exactly one solution exists.


//brute force
#include <bits/stdc++.h>
using namespace std;

void two_sum(vector<int> arr, int target)
{
    sort(arr.begin(), arr.end());

    int left = 0;
    int right = arr.size() - 1;

    while (left < right)
    {
        int sum = arr[left] + arr[right];

        if (sum == target)
        {
            cout << arr[left] << " " << arr[right];
            return;
        }
        else if (sum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return;
}

int main()
{
    vector<int> vec = {9, 5, 7, 2, 1};
    int target = 11;
    two_sum(vec, target);
    return 0;
}
