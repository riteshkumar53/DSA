// sort array by parity(905)

#include <bits/stdc++.h>
using namespace std;

vector<int> sort(vector<int> vec)
{
    int even = 0;
    int n = vec.size();
    for (int i = 0; i < n; i++)
    {
        if (vec[i] % 2 == 0)
        {
            swap(vec[i], vec[even]);
            even++;
        }
    }

    return vec;
}

int main()
{
    vector<int> vec = {3, 1, 2, 4};
    vec = sort(vec);
    for (int x : vec)
    {
        cout << x << " ";
    }
    return 0;
}