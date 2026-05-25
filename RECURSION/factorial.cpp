#include <iostream>
using namespace std;

int factorial = 1;

void recursion1(int n)
{
    if (n == 1)
    {
        return;
    }

    factorial = n * factorial;

    recursion1(n - 1);
}

int recursion2(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n * recursion2(n - 1);
}

int main()
{
    recursion1(5);
    cout << factorial << "\n";
    int factorial2 = recursion2(5);
    cout << factorial2;
    return 0;
}