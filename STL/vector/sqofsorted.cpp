// square of sorted array in non decreasing

#include <bits/stdc++.h>
using namespace std;

void sq_of_sorted(vector<int> vec)
{
    int n = vec.size();
    int left = 0;
    int right = n - 1;
    vector<int> max(n);
    int i = 0;

    vec[left] = vec[left] * vec[left];
    vec[right] = vec[right] * vec[right];

    while (left <= right)
    {

        if (vec[left] >= vec[right])
        {
            max[i++] = vec[left];
            left++;
            vec[left] = vec[left] * vec[left];
        }

        else
        {
            max[i++] = vec[right];
            right--;
            vec[right] = vec[right] * vec[right];
        }
    }

    for (int val : max)
    {
        cout << val << " ";
    }
}

int main()
{
    vector<int> vec = {-4, -1, 0, 2, 3};
    sq_of_sorted(vec);
    return 0;
}