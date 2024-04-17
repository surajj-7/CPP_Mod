#include<iostream>
using namespace std;
int main(void)
{
    int n1,n2,hcf;
    cout<<"Enter two numbers"<<endl;
    cin>>n1>>n2;

    for(int i=1;i<=n1 && i<=n2;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            hcf=i;
        }
    }
    cout<<"GCD of "<<n1<<" & "<<n2<<" is "<<hcf<<endl;
}