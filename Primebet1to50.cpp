#include<iostream>
using namespace std;
int main(void)
{
    int i,j;
    for(i=2;i<50;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
            break;
        }
        if(i==j)
        cout<<i<<" ";
    }
}