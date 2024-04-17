#include<iostream>
using namespace std;
int main(void)
{
    int n1,c,sum=0,rem;
    cout<<"Enter any number"<<endl;
    cin>>n1;
    c=n1;

    while(n1>0)
    {
        rem=n1%10;
        sum=(sum*10)+rem;
        n1=n1/10;
    }
    if(sum==c)
        cout<<"The number is Palindrome"<<endl;
    else
        cout<<"Not Palindrome"<<endl;
}