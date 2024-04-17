#include<iostream>
using namespace std;
int main(void)
{
    int i;
    int arr[10]={10,15,17,27,42,89,77,9,33,4};
    cout<<endl<<"Even nos from array are:";
    for( i=0;i<10;i++)
    {
        if(arr[i]%2==0)
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Odd nos from array are:";
    for(int i=0;i<10;i++)
    {
        if(arr[i]%2==1)
        cout<<arr[i]<<" ";    
    }    
}