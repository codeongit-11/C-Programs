#include<iostream>
using namespace std;
 
int main()
{
    int y;
 
    cout<<"Enter any Year (XXXX) :: ";
    cin>>y;
   if( y%100==0)
    {
        if(y%400==0)
        {
            cout<<"The year is a leap year it has 366 days."<<endl;
        }
    }
    else
    {
       if(y%4==0)
       {
           cout<<"The year is a leap year it has 366 days."<<endl;
       }
       else
       {
           cout<<"The year is not a leap year it has 365 days."<<endl;
       }
       
    
    return 0;
}


