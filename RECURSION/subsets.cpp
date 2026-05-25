#include <iostream>
using namespace std;

void subset(int arr[],int subset2[],int n,int size,int i)
{
    if(n == i)
    {
        for(int j = 0; j < size; j++)
        {
            cout << subset2[j] << " ";
        }
        cout << "\n";
        return; 
    }

    //include
    subset2[size]=arr[i];

    subset(arr,subset2,n,size+1,i+1);

    //exclude
    subset(arr,subset2,n,size,i+1);


}

int main()
{
    int arr[]={1,2,3};
    int subset2[6];
    subset(arr,subset2,3,0,0);
    return 0;
}