// reverse word in string (151)

// two way 1>store each word in vector then print opposite 2> reverse whole sentence then reverse each word

// brute force
/*#include <bits/stdc++.h>
using namespace std;

string reverse_word(string s)
{
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ' ' && (i + 1 >= s.size() || s[i + 1] == ' '))
        {
            s.erase(i, 1);
            i--;
        }

        if (s[0] == ' ')
        {
            s.erase(0, 1);
            i--;
        }
    }
    reverse(s.begin(), s.end());

    int k = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (i == s.size() - 1)
        {
            reverse(s.begin() + i - k, s.end());
            break;
        }
        if (s[i] != ' ')
        {
            k++;
            continue;
        }

        reverse(s.begin() + i - k, s.begin() + i);
        k = 0;
    }
    return s;
}

int main()
{
    string s = {"  hii  this     is ritesh kumar      "};
    cout << reverse_word(s) << endl;
    cout << s.size();
    return 0;
}*/

// optimal solution

#include <bits/stdc++.h>
using namespace std;

string Reverse_word(string &s)
{
    reverse(s.begin(), s.end());

    int i = 0;
    int l = 0;
    int n = s.size();

    while (i < n)
    {
        while (i < n && s[i] == ' ')
        {
            i++;
        }

        if (i >= n)
        {
            break;
        }

        if (l != 0)
        {
            s[l] = ' ';
            l++;
        }

        int start = l;

        while (i < n && s[i] != ' ')
        {
            s[l] = s[i];
            i++, l++;
        }

        reverse(s.begin() + start, s.begin() + l);
    }

    s.resize(l);

    return s;
}

int main()
{
    string s = {" hii everyone      this is      ritesh kumar        "};
    cout << Reverse_word(s);
    return 0;
}