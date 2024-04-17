#include<iostream>
using namespace std;
int main(void)
{
    int arr[5]={10,20,30,40,50};
    int key,i,pos,cnt=0;
    cout<<"Enter the element for searching in array:";
    cin>>key;
    bool flag;
    for(i=0;i<5;i++)
    {
        if(arr[i]==key){
        //cnt=1;
        flag=true;
      
        break;}     
    }
    if(flag==false)
    cout<<"Element not found"<<endl;
    else
    cout<<"Element "<<key<<" "<<"found at index:"<<i<<endl;
  
}