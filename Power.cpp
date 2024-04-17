#include<iostream>
using namespace std;
int main(void)
{
    int b,p,res=1;
    cout<<"Enter the base"<<endl;
    cin>>b;
    cout<<"Enter the power"<<endl;
    cin>>p;

    for(int i=1;i<=p;i++)
    {
        res=b*res;

    }
    cout<<"The required result is "<<res<<endl;
}