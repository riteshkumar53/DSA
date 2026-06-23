// Contains Duplicate (LeetCode 217)

#include <bits/stdc++.h>
using namespace std;

// brute force
bool duplicate(vector<int> vec)
{
    sort(vec.begin(), vec.end());

    for (int i = 0; i < vec.size() - 1; i++)
    {
        if (vec[i] == vec[i + 1])
        {
            return false;
        }
    }

    return true;
}

bool duplicate(vector<int> vec)
{
    unordered_map<int, int> mp;

    for (int x : nums)
    {
        mp[x]++;
        if (mp[x] > 1)
            return true;
    }

    return false;
}

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7};

    cout << duplicate(vec);

    return 0;
}