#include <iostream>
using namespace std;

int sum=0;

void sumofn(int n)
{
    if(n==0)
    {
        return;
    }

    sum=sum+n;

    sumofn(n-1);
}

int sumofN(int n)
{
    if(n==1)
    {
        return 1;
    }

    return n+sumofN(n-1);
}

int main()
{
    sumofn(10);
    cout<<sum<<"\n";
    cout<<sumofN(10);
    return 0;
}
