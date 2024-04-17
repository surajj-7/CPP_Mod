#include<iostream>
using namespace std;
int main(void)
{
    int ch;
    float area;
    cout<<"1.TRIANGLE 2.RECTANGLE 3.CIRCLE"<<endl;
    
    do
    {
        cout<<"Enter the choice...!"<<endl;
        cin>>ch;

        switch(ch)
        {
            case 1:int b,h;
                    cout<<"Enter the base and height"<<endl;
                    cin>>b>>h;
                    area=0.5*b*h;
                    cout<<"Area of Triangle is:"<<area<<endl;
                    break;

            case 2:int l,b1;
                    cout<<"Enter the length and breadth"<<endl;
                    cin>>l>>b1;
                    area=l*b1;
                    cout<<"Area of Rectangle is:"<<area<<endl;
                    break;

            case 3:int r;
                    cout<<"Enter the radii of circle"<<endl;
                    cin>>r;
                    area=3.14*r*r;
                    cout<<"Area of Circle is:"<<area<<endl;
                    break;

            default:cout<<"Enter the valid choice...!"<<endl;
            break;

        }
    } while (ch!=0);
    
}