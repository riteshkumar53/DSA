#include <iostream>
using namespace std;

int binarysearch(int arr[],int low,int high,int key)
{
    int mid=low+(high-low)/2;
    if(low>high)
    {
        return -1;
    }

    if(arr[mid]==key)
    {
        return mid;
    }

    if(arr[mid]>key)
    {
        high=mid-1;
    }

    else
        low=mid+1;

    return binarysearch(arr,low,high,key);   
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,12,34,56,78,90,99};
    int n=binarysearch(arr,0,14,34);
    if(n==-1)
    {
        cout<<"not in array:\n";
    }
    else
        cout<<"key is at "<<n+1;
    return 0;
}