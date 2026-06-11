// is subsequence(392)


//optimal solution 
#include <bits/stdc++.h>
using namespace std;

bool subsequence(string t,string s)
{
    if(s.empty())
    {
        return true;
    }
    int k=0;
    for(int i=0;i<t.size();i++)
    {
        if(t[i]==s[k])
        {
            k++;
        }

        if(k == s.size())
        {
            return true;
        }
    }
    return false;
}

int main()
{
    string t = "ahbgdc";
    string s = "ahbc";
    cout<<subsequence(t,s);
    return 0;
}