// First Unique Character in a String(387)

#include <bits/stdc++.h>
using namespace std;

int first_unique(string s)
{
    int n=s.size();
    unordered_map<char,int> map;
    for(int i=0;i<n;i++)
    {
        map[s[i]]++;
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (map[s[i]] == 1)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    string s = {"leetcode"};
    cout<<first_unique(s);
    return 0;
}