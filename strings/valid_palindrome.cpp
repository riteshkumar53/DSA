// valid palindrome (125)

#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(string &s)
{
    int n=s.size();
    int i=0;
    int l=0;
    while(i<n)
    {
        while(i < n && !isalnum(s[i]))
        {
            i++;
        }

        if(i>=n)
        {
            break;
        }

        while(i<n && isalnum(s[i]))
        {
            s[l]=tolower(s[i]);
            i++;
            l++;
        }
    }
    s.resize(l);

    n=l;
    int left=0;
    int right=n-1;

    while(left<right)
    {
        if(s[left++]==s[right--])
        {
            continue;
        }

        return false;
    }

    return true;
    
}

int main()
{
    string s={"A man, a plan, a canal: Panama"};
    cout<<is_palindrome(s);

    return 0;
}