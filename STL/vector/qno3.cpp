// without sort find second largest element  //interview question

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec = {1, 5, 6, 3, 9, 7, 3};
    int largest = INT_MIN;
    int second_largest=INT_MIN;

    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] >largest)
        {
            second_largest=largest;
            largest=vec[i];
        }

        else if(vec[i]>second_largest && vec[i] != largest)
        {
            second_largest=vec[i];
        }
    }

    cout<<second_largest;
    return 0;
}