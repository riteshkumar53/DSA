// Number of Substrings Containing All Three Characters (1358)

#include <bits/stdc++.h>
using namespace std;

// Brute Force
int no_of_substring(string s)
{

    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int a = 0, b = 0, c = 0;
        for (int j = i; j < s.size(); j++)
        {
            if (s[j] == 'a')
                a = 1;
            else if (s[j] == 'b')
                b = 1;
            else if (s[j] == 'c')
                c = 1;

            if (a && b && c)
                count++;
        }
    }
    return count;
}

// optimal solution
int No_of_substring(string s)
{
    int count = 0;
    int n = s.size();
    int i = 0;
    int j = 0;
    vector<int> map(3, 0); // 0=a,1=b,2=c
    while (j < n)
    {
        char ch = s[j];
        map[ch - 'a']++;

        while (map[0] > 0 && map[1] > 0 && map[2] > 0)
        {
            count += n - j;
            map[s[i] - 'a']--;
            i++;
        }
        j++;
    }
    return count;
}

int main()
{
    string s = "abcabc";
    cout << No_of_substring(s);
    return 0;
}