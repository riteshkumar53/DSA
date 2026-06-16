// BALANCE PARANTHESIS(20)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int stack[100];
    string s = {"[[()]]"};
    int top = -1;
    int n = s.size();

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '[' || s[i] == '{' || s[i] == '(')
        {
            top++;
            stack[top] = s[i];
            continue;
        }

        if (s[i] == ']' || s[i] == '}' || s[i] == ')')
        {
            if (top == -1)
            {
                cout << "Invalid parenthesis";
                return 0;
            }

            if ((s[i] == ')' && stack[top] != '(') || (s[i] == '}' && stack[top] != '{') || (s[i] == ']' && stack[top] != '['))
            {
                cout << "Invalid paranthesis:";
                return 0;
            }
            else
                top--;
        }
    }
    if (top != -1)
    {
        cout << "Invalid paranthesis:";
        return 0;
    }
    else
        cout << "Valid paranthesis:";
    return 0;
}