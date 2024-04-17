#include<iostream>
using namespace std;
int main(void)
{
    int n1,sum=0;
    cout<<"Enter a number"<<endl;
    cin>>n1;
    if(n1%2==0)
    {   for(int i=2;i<=n1;i=i+2)
        {
            sum=sum+i;    
        }
    cout<<"Sum of Even is "<<sum<<endl;
    }
    else
    {   for(int i=1;i<=n1;i=i+2)
        {
            sum=sum+i;    
        }
    cout<<"Sum of Odd is "<<sum<<endl;
    }
}