// remove element(27)

//brute force

#include <bits/stdc++.h>
using namespace std;


int remove(vector<int> vec,int val)
{
    int n=vec.size();
    for(int i=0;i<n;i++)
    {
        if(vec[i] == val)
        {
            for(int k=i;k<n;k++)
            {
                vec[k]=vec[k+1];
            }
            n--;
        }
    }
    return n;
}

int main()
{
    vector<int> vec={0,2,4,7,2,5,7,2,5};
    int k=remove(vec,2);
    cout<<k<<endl;
    return 0;
}


//optimal

