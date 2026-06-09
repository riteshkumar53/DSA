// longest common prefix

// brute force
#include <bits/stdc++.h>
using namespace std;

string common_prefix(vector<string> str)
{
    string ans = "";
    for (int j = 0; j < str[0].size(); j++)
    {
        char ch = str[0][j];
        for (int i = 1; i < str.size(); i++)
        {
            if (ch != str[i][j] || j >= str[i].size())
            {
                return ans;
            }
        }
        ans += ch;
    }
    return ans;
}

int main()
{
    vector<string> str = {"ritesh", "ritik", "r"};
    cout << common_prefix(str);
    return 0;
}

// optimal solution