#include<iostream>
using namespace std;
int main(void)
{
    int n1;
    cout<<"Enter any number"<<endl;
    cin>>n1;
    if(n1%5==0 && n1%7==0)
        cout<<"The number is divisible by 5 & 7"<<endl;
    else
        cout<<"Not Divisible by 5 & 7"<<endl;
}