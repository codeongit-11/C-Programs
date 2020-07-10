#include<iostream>
using namespace std;
 
int main()
{
    int y,f,i;
    cout<<"Enter Inches: ";
    cin>>i;
 
    y=i/432;
    i=i%432;
    f=i/12;
    i=i%12;
 
    cout<<"Yard = "<<y<<endl<<"Feet = "<<f<<endl<<"Inches= "<<i<<endl;
    return 0;
}