#include<iostream>
 
using namespace std;
 
int main()
{
    int y,d,w;
 
    cout<<"Enter No. of days:";
    cin>>d;
 
    y=d/365;
    d=d%365;
    w=d/7;
    d=d%7;
 
    cout<<"\nYears: "<<y<<"\nWeeks: "<<w<<"\nDays: "<<d;
    return 0;
}
