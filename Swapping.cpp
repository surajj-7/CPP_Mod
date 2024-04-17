#include<iostream>
using namespace std;
int main(void)
{
    int n1,n2,temp;
    cout<<"Enter two numbers"<<endl;
    cin>>n1>>n2;
    cout<<"Before Swapping"<<" "<<n1<<" "<<n2<<endl;
    temp=n1;
    n1=n2;
    n2=temp;
    cout<<"After Swapping"<<" "<<n1<<" "<<n2;
}