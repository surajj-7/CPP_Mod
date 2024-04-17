//Accept character from user and print the next character of it.
#include<iostream>
using namespace std;
int main(void)
{
    char ch;
    int no;
    cout<<"Enter any character"<<endl;
    cin>>ch;

    no=ch;

    ch=++no;

    cout<<"Next character is:"<<ch<<endl;


}