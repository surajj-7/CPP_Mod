#include<iostream>
using namespace std;
int main()
{
	int num;
    cout<<"Enter number "<<endl;
	cin>>num;
	int flag=0;
	bool b=false;
	for(int i=2;i<=num/2 ;i++)
	{
		if(num%i==0)
		{
			b=false;
            flag=0;	
		    break;
		}
		else
		{
			b=true;
            flag=1;
		}
    }	
	if(flag==0)
	{
	cout<<"not Prime"<<endl;	
	}
	else
	{
		cout<<" Prime"<<endl;
    }
}
