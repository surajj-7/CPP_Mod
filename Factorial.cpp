#include<iostream>
using namespace std;
int main(void)
{
    int n1,fact=1;
    cout<<"Enter number"<<endl;
    cin>>n1;
    for(int i=1; i<=n1; i++)
    {
        fact=fact*i;
    }
    cout<<"Factorial:"<<fact<<endl;

}