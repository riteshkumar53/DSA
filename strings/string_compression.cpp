// String Compression (443)

#include <bits/stdc++.h>
using namespace std;

vector<char> string_compression(vector<char> &chars)
{
    int i = 0;
    int j = 0;
    int n = chars.size();
    int write = 0;
    while (i < n)
    {
        int count = 0;
        while (j < n && chars[j] == chars[i])
        {
            j++;
        }
        count = j - i;
        chars[write++] = chars[i];
        i = j;
        if (count > 1)
        {
            string s = to_string(count);
            for (int k = 0; k < s.size(); k++)
            {
                chars[write++] = s[k];
            }
        }
    }
    chars.resize(write);
    return chars;
}

int main()
{
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    chars = string_compression(chars);
    for (char ch : chars)
    {
        cout << ch << " ";
    }
    return 0;
}