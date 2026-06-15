// spiral matrix(54)

#include <bits/stdc++.h>
using namespace std;

vector<int> spiral_matrix(vector<vector<int>> matrix)
{
    vector<int> ans;

    int top = 0;
    int bottom = matrix.size() - 1;
    int left = 0;
    int right = matrix[0].size() - 1;

    while (top <= bottom && left <= right)
    {
        // left -> right
        for (int i = left; i <= right; i++)
            ans.push_back(matrix[top][i]);
        top++;

        // top -> bottom
        for (int i = top; i <= bottom; i++)
            ans.push_back(matrix[i][right]);
        right--;

        if (top > bottom)
            break;

        // right -> left
        for (int i = right; i >= left; i--)
            ans.push_back(matrix[bottom][i]);
        bottom--;

        if (left > right)
            break;

        // bottom -> top
        for (int i = bottom; i >= top; i--)
            ans.push_back(matrix[i][left]);
        left++;
    }

    return ans;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    vector<int> vec = spiral_matrix(matrix);

    for (int x : vec)
    {
        cout << x << " ";
    }
    return 0;
}