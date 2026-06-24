// Zigzag Conversion(6)

#include <bits/stdc++.h>
using namespace std;

string zigzag(string s, int n)
{

    if (n == 1 || n >= s.size())
    {
        return s;
    }
    vector<string> rows(n);

    int row = 0;
    int dir = 1; // 1=down  -1=up
    for (int i = 0; i < s.size(); i++)
    {
        rows[row] += s[i];

        if (row == 0)
        {
            dir = 1;
        }
        if (row == n - 1)
        {
            dir = -1;
        }

        row += dir;
    }

    string ans = "";
    for (int i = 0; i < n; i++)
    {
        ans += rows[i];
    }
    return ans;
}

int main()
{
    string s = {"PAYPALISHIRING"};
    s=zigzag(s,3);
    for(char ch:s)
    {
        cout<<ch<<" ";
    }
    return 0;
}