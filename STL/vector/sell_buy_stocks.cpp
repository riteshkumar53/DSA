// Best Time to Buy and Sell Stock (121)


// optimal solution
#include <bits/stdc++.h>
using namespace std;

void time_stock(vector<int> vec)
{
    int min_price=vec[0];
    int profit;
    int max_profit=0;

    for(int i=1;i<vec.size();i++)
    {
        if(vec[i]<min_price)
        {
            min_price=vec[i];
        }

        profit=vec[i]-min_price;

        max_profit=max(max_profit,profit);
    }

    cout<<"Maximum profit = "<<max_profit<<endl;

    return;
}

int main()
{
    vector<int> vec={4,1,5,2,8,0,3,6};
    time_stock(vec);
    return 0;
}