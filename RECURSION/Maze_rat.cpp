#include <iostream>
using namespace std;

int n = 5;

void mazesolver(int maze[][5], int row, int col, string path)
{
    // Boundary check
    if (row < 0 || col < 0 || row >= n || col >= n)
    {
        return;
    }

    // Blocked or visited cell
    if (maze[row][col] == 0)
    {
        return;
    }

    // Destination reached
    if (row == n - 1 && col == n - 1)
    {
        cout << path << endl; // endl=next line
        return;
    }

    // Mark visited
    maze[row][col] = 0;

    // Down
    mazesolver(maze, row + 1, col, path + "D");

    // Up
    mazesolver(maze, row - 1, col, path + "U");

    // Left
    mazesolver(maze, row, col - 1, path + "L");

    // Right
    mazesolver(maze, row, col + 1, path + "R");

    // Backtracking
    maze[row][col] = 1;
}

int main()
{
    int maze[5][5] =
        {
            {1, 0, 0, 0, 0},
            {1, 1, 1, 1, 1},
            {1, 1, 0, 1, 0},
            {0, 1, 1, 1, 0},
            {0, 0, 0, 1, 1}};

    mazesolver(maze, 0, 0, "");

    return 0;
}