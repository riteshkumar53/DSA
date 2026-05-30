#include <iostream>
using namespace std;

#define n 5

bool is_safe(char chess[][n], int col, int row)
{
    for (int i = row - 1; i >= 0; i--)
    {
        if (chess[i][col] == 'Q')
        {
            return false;
        }
    }

    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
    {
        if(chess[i][j] == 'Q')
            return false;
    }

    for(int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++)
    {
        if(chess[i][j] == 'Q')
            return false;
    }

    return true;
}

void N_Queens(char chess[][n], int row) // In C++,the second dimension must be known:
{
    if (row == n)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                cout << chess[j][k] << " ";
            }
            cout << "\n";
        }
        cout << "\n";
        return;
    }

    for (int col = 0; col < n; col++)
    {
        if (is_safe(chess, col, row ))
        {
            chess[row][col] = 'Q';
            N_Queens(chess, row + 1);
            chess[row][col] = '.';
        }
    }

    return;
}

int main()
{
    char chess[n][n];
    for (int j = 0; j < n; j++)
    {
        for (int k = 0; k < n; k++)
        {
            chess[j][k] = '.';
        }
    }

    N_Queens(chess, 0);
    return 0;
}