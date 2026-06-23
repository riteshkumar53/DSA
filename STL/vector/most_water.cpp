// LeetCode 11 — Container With Most Water

#include <bits/stdc++.h>
using namespace std;

int most_water(vector<int> &height)
{
    int n = height.size();
    int i = 0;
    int j = n - 1;
    int area=0;
    int max_area=0;

    while (i < j)
    {
        area = (j - i) * min(height[i], height[j]);
        max_area = max(max_area, area);
        if (height[i] < height[j])
            i++;
        else
            j--;
    }
    return max_area;
}

int main()
{
    vector<int> h = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << most_water(h);
    return 0;
}