/*Write a program to create an array of integers and perform following operations on that array like 
finding the sum, average, maximum and minimum number in that array. Accept the numbers of the 
array from user.*/
#include<iostream>
using namespace std;
int main(void)
{
    int size,sum=0,avg=0,max,min;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    int arr[size],i;

    cout<<"Enter the elements of the array: ";

    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Array elemets are:"<<endl;
    for(int j=0;j<size;j++)
    {
        cout<<arr[j]<<" ";
    }
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    cout<<"\nsum of the array is:"<<sum<<endl;
    for(int i=0;i<size;i++)
    {
        avg=sum/size;
    }
    cout<<"Avg of the array is:"<<avg<<endl;

    max=arr[0];
    for(i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<"Maximum of given array is:"<<max<<endl;

    min=arr[0];
    for(i=0;i<size;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<"Minimum of given array is:"<<min<<endl;

}