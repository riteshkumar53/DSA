// Remove Duplicates // leetcode qno 26

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "enter no of elements:";

    cin >> n;

    vector<int> vec(n);

    for(int i=0;i<n;i++)
    {
        cin >> vec[i];
    }
    //sort(vec.begin(), vec.end());

    auto it=unique(vec.begin(),vec.end());

    vec.erase(it,vec.end());

    for(int val:vec)
    {
        cout<<val<<" ";
    }
    return 0;
}