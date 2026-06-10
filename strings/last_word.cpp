// length of last word(58)

#include <bits/stdc++.h>
using namespace std;

int last_word(string str)
{
    int n = str.size() - 1;
    int k = 0;
    for (int i = n; i >= 0; i--)
    {
        if (str[i] == ' ')
        {
            continue;
        }

        k++;

    
        if (i == 0 || str[i - 1] == ' ')
        {
            break;
        }
    }
    return k;
}

int main()
{
    string str = {"hello    "};
    int k = last_word(str);
    cout << k;
    return 0;
}