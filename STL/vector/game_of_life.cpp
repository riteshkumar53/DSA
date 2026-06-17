// Game of Life(289)

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> game_of_life(vector<vector<int>> board)
{
    int n = board.size();
    int m = board[0].size();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int live = 0;

            for (int r = i - 1; r <= i + 1; r++)
            {
                for (int c = j - 1; c <= j + 1; c++)
                {
                    if (r < 0 || r >= n || c < 0 || c >= m)
                        continue;

                    if (r == i && c == j)
                        continue;

                    if (board[r][c] == 1 || board[r][c] == -1)
                        live++;
                }
            }

            if (board[i][j] == 1)
            {
                if (live < 2 || live > 3)
                    board[i][j] = -1;
            }
            else if (board[i][j] == 0)
            {
                if (live == 3)
                    board[i][j] = 2;
            }
        }
    }

    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[0].size(); j++)
        {
            if (board[i][j] == 2)
            {
                board[i][j] = 1;
            }
            if (board[i][j] == -1)
            {
                board[i][j] = 0;
            }
        }
    }

    return board;
}

int main()
{
    vector<vector<int>> board =
        {
            {0, 1, 0},
            {0, 0, 1},
            {1, 1, 1},
            {0, 0, 0}};

    board = game_of_life(board);
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[0].size(); j++)
        {
            cout << board[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}