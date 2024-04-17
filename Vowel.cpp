#include<iostream>
using namespace std;
int main(void)
{
    char ch;
    cout<<"Enter any lowecase character"<<endl;
    cin>>ch;
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        cout<<"The entered character is a Vowel"<<endl;
    else
        cout<<"The entered character is Consonant"<<endl;

}