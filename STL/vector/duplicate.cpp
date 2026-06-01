// Contains Duplicate (LeetCode 217)

#include <bits/stdc++.h>
using namespace std;

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

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7};

    cout << duplicate(vec);
    
    return 0;
}