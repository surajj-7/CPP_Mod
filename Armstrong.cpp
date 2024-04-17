#include<iostream>
using namespace std;
int main(void)
{
    int n1,c,sum=0,rem,arm;
    cout<<"Enter any number"<<endl;
    cin>>n1;
    c=n1;

    while(n1>0)
    {
        rem=n1%10;
        arm=rem*rem*rem;
        sum=sum+arm;
        n1=n1/10;
    }
    if(c==sum)
    { 
    cout<<"Armstrong number"<<endl;
    }
    else
    {
        cout<<"Not Armstrong number"<<endl;
    }
}