#include <iostream>
using namespace std;

#define N 9

bool is_safe(char table[][N], int row, int col, int digit)
{
    for (int i = 0; i < N; i++)
    {
        if (table[row][i] == digit+'0')
        {
            return false;
        }
    }

    for (int i = 0; i < N; i++)
    {
        if (table[i][col] == digit+'0')
        {
            return false;
        }
    }

    int rowtemp = (row / 3) * 3;
    int coltemp = (col / 3) * 3;

    for (int i = rowtemp; i < rowtemp + 3; i++)
    {
        for (int j = coltemp; j < coltemp + 3; j++)
        {
            if (table[i][j] == digit + '0')
            {
                return false;
            }
        }
    }

    return true;
}

bool sudoko(char table[][N], int row, int col)
{
    if (row == N)
    {
        return true;
    }

    int nextrow = row;
    int nextcol = col + 1;

    if (nextcol == N)
    {
        nextcol = 0;
        nextrow = row + 1;
    }

    if (table[row][col] != '.')
    {
        return sudoko(table, nextrow, nextcol);
    }

    for (int digit = 1; digit < 10; digit++)
    {
        if (is_safe(table, row, col, digit))
        {
            table[row][col] = digit + '0';
            if (sudoko(table, nextrow, nextcol))
            {
                return true;
            }

            table[row][col] = '.';
        }
    }

    return false;
}

void display(char table[][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << table[i][j] << " ";
        }
        cout << "\n";
    }
}
int main()
{
    char table[9][9] =
        {
            {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
            {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
            {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
            {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
            {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
            {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
            {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
            {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
            {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

    if (sudoko(table, 0, 0))
    {
        display(table);
    }

    return 0;
}