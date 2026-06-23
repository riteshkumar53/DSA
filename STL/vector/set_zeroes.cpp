// set matrix zeroes(73)

#include <bits/stdc++.h>
using namespace std;

void /*vector<vector<int>>*/ set_zeroes(vector<vector<int>> m)
{
    int col0 = 1;
    for (int i = 0; i < m.size(); i++)
    {
        if (m[i][0] == 0)
            col0 = 0;

        for (int j = 1; j < m[0].size(); j++)
        {
            if (m[i][j] == 0)
            {
                m[i][0] = 0;
                m[0][j] = 0;
            }
        }
    }

    // for(int j=1;j<m[0].size();j++)
    // {
    //     if(m[0][j]==0)
    //     {
    //         for(int i=0;i<m.size();i++)
    //         {
    //             m[i][j]=0;
    //         }
    //     }
    // }

    // if(m[0][0] == 0)
    // {
    //     for(int j=0;j<m[0].size();j++)
    //     {
    //         m[0][j]=0;
    //     }
    // }

    // for(int i=1;i<m.size();i++)
    // {
    //     if(m[i][0]==0)
    //     {
    //         for(int j=0;j<m[0].size();j++)
    //         {
    //             m[i][j]=0;
    //         }
    //     }
    // }

    // if (col0 == 0)
    // {
    //     for (int i = 0; i < m.size(); i++)
    //     {
    //         m[i][0] = 0;
    //     }
    // }

    for (int i = m.size() - 1; i >= 0; i--)
    {
        for (int j = m[0].size() - 1; j >= 1; j--)
        {
            if (m[i][0] == 0 || m[0][j] == 0)
            {
                m[i][j] = 0;
            }
        }
        if (col0 == 0)
        {
            m[i][0] = 0;
        }
    }

    for (int i = 0; i < m.size(); i++)
    {
        for (int j = 0; j < m[0].size(); j++)
        {
            cout << m[i][j] << " ";
        }
        cout << "\n";
    }

    return;
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 0, 1},
                                  {2, 5, 9, 9},
                                  {1, 2, 1, 9},
                                  {0, 3, 6, 8}};

    set_zeroes(matrix);

    return 0;
}