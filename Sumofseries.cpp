#include<iostream>
using namespace std;
int main(void)
{
    int n1,sum=0;
    cout<<"Enter any number"<<endl;
    cin>>n1;
    for(int i=1;i<=n1;i++)
    {
        sum=sum+i;
    }
    cout<<"Sum of the series is "<<sum<<endl;
}