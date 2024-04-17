#include<iostream>
using namespace std;
int main(void)
{
    char ch;
    cout<<"Enter any character"<<endl;
    cin>>ch;
    
    ch-=32;
    cout<<"Uppercase character "<<ch<<endl;
}