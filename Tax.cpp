#include<iostream>
using namespace std;
int main(void)
{
    int sal;
    int tax=0;
    cout<<"Enter Salary"<<endl;
    cin>>sal;
    if(sal<150000)
    {
        cout<<"No need of Tax"<<endl;
    }
    else if(sal>=150000 && sal<300000)
    {
        tax=sal*0.20;
        cout<<"The tax required is"<<" "<<tax<<endl;
    }
    else
    {
        tax=sal*0.30;
        cout<<"The tax required is"<<" "<<tax<<endl;
    }
}