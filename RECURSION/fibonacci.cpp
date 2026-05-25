#include<iostream>
using namespace std;

void fibonacci(int a,int b,int n)
{
    if(n==0)
    {
        return;
    }

    int c;
    c=a+b;

    cout<<c<<" ";

    fibonacci(b,c,n-1);

}

int FIBONACCI(int n)
{
    if(n==0||n--1)
    {
        return n;
    }

    return FIBONACCI(n-1)+FIBONACCI(n-2);
}

int main()
{
    int a=0,b=1;
    int n=10;
    cout<< a <<" "<< b <<" ";
    fibonacci(a,b,n-2);
    return 0;
}