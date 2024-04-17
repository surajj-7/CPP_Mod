#include<iostream>
using namespace std;
int main(void)
{
    int arr[5],sum=0;
    cout<<"ENTER THE ARRAY ELEMENTS"<<endl;
    //int i;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
        
    }
      for(int j=0;j<5;j++)
        {
            //  cin>>arr[i];
                cout<<arr[j]<<" "<<endl;
                sum+=arr[j];
        }
        cout<<"Sum of array elements is "<<sum<<endl;
    }
    