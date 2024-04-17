#include<iostream>
using namespace std;
int main(void)
{
    int arr[10]={11,22,33,44,55,66,77,88,99,110};
    for(int i=0;i<10;i++)
    {
        if(arr[i]>50)
        {
            cout<<arr[i]<<" ";
        }
    }
}