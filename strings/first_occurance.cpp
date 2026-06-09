// index of first occurance in string (28)


#include <bits/stdc++.h>
using namespace std;


// Brute force
int first_occurance(string haystack, string needle)
{
    if(needle.empty())
    {
        return 0;
    }
    char ch = needle[0];
    for (int j = 0; j < haystack.size(); j++)
    {
        if (ch == haystack[j])
        {
            string ans = "";
            for (int k = j; k < haystack.size() && (k-j)<needle.size(); k++)
            {
                if (haystack[k] != needle[k - j])
                {
                    ans="";
                    break;
                }
                ans += haystack[k];

                if(ans == needle)
                {
                    return j;
                }
            }
        }
    }
    return -1;
}

int main()
{
    string haystack = "hellowidow";
    string needle = "eow";
    cout << first_occurance(haystack, needle);
    return 0;
}