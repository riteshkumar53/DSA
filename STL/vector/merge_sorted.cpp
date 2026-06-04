// Merge Sorted Array (88)

#include <bits/stdc++.h>
using namespace std;

void sort(vector<int> &num1, int m, vector<int> &num2, int n)
{
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    while (i >= 0 && j >= 0)
    {
        if(num1[i]>=num2[j])
        {
            num1[k]=num1[i];
            i--;
            k--;
        }
        else if(num1[i]<num2[j])
        {
            num1[k]=num2[j];
            j--;
            k--;
        }
    }

    while(j>=0)
    {
        num1[k]=num2[j];
        k--;
        j--;
    }
}

int main()
{
    int m=3,n=4;
    vector<int> vec1 = {2, 3, 5};
    vector<int> vec2 ={1,2,4,7,};
    vec1.resize(vec1.size() + vec2.size());
    sort(vec1, 3, vec2, 4);
    for (int val : vec1)
    {
        cout << val << " ";
    }
    return 0;
}