#include<iostream>
using namespace std;
int main(void)
{
    int ch,q,price;
    cout<<"Enter 1.PEPSI 2.PANEER PIZZA 3.CHICKEN PIZZA 4.FRUTI"<<endl;
    //cout<<"Enter the choice..!"<<endl;
    //cin>>ch;
    do{
        cout<<"Enter the choice..!"<<endl;
        cin>>ch;
        switch(ch)
        { 
        
            case 1:
                cout<<"Enter the Quantity"<<endl;
                cin>>q;
                price+=40*q;
                cout<<"Amount to be paid for PEPSI is "<<price<<endl;
                break;
            case 2:
                cout<<"Enter the Quantity"<<endl;
                cin>>q;
                price+=170*q;
                cout<<"Amount to be paid for PANEER PIZZA is "<<price<<endl;
                break;
            case 3:
                cout<<"Enter the Quantity"<<endl;
                cin>>q;
                price+=220*q;
                cout<<"Amount to be paid for CHICKEN PIZZA is "<<price<<endl;
                break;
            case 4:
                cout<<"Enter the Quantity"<<endl;
                cin>>q;
                price+=15*q;
                cout<<"Amount to be paid for FRUTI is "<<price<<endl;
                break;
            default:
                cout<<"Enter Valid Choice..!"<<endl;
                break;
        }
    }while(ch!=0);
}