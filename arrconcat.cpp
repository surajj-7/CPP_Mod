#include<iostream>
using namespace std;
int main(void)
{
    int arr1[5]={10,20,30,40,50};
    int arr2[5]={60,70,80,90,100};
    
    int a1,a2,a3;
    a1=sizeof(arr1)/sizeof(arr1[0]);
    a2=sizeof(arr2)/sizeof(arr2[0]);

    a3=a1+a2;
   // cout<<a3<<endl;

    int arr3[10];

    for(int i=0,j=0;i,j<a3;i++)
    {
        if(i<5)
        {
            arr3[i]=arr1[i];
           // cout<<arr1[i]<<" ";
        }
        else
        {
            arr3[i]=arr2[j];
            cout<<arr3[j]<<" ";
            j++;
        }

    }
}