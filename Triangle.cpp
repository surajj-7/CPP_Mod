#include<iostream>
using namespace std;
int main(void)
{
    int n1,n2,n3,sum=0;
    cout<<"Enter the three angle of a triangle"<<endl;
    cin>>n1>>n2>>n3;
    sum=n1+n2+n3;
    if(sum==180 && n1>0 && n2>0 && n3>0)
        cout<<"Valid Triangle"<<endl;
    else
    {
        cout<<"Invalid Triangle"<<endl;
    }
}