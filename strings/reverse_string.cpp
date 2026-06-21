// reverse string(344)

#include <bits/stdc++.h>
using namespace std;

string reverse(string str)
{
    int n = str.size();
    for (int i = 0; i < n / 2; i++)
    {
        swap(str[i], str[n - i - 1]);
    }
    return str;
}

int main()
{
    string str = {"hsetir"};
    cout << reverse(str);
    return 0;
}