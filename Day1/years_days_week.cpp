#include<iostream>
using namespace std;
int main()
{
   int y,d,w;
   cout<<"Enter number of days: ";
   cin>>d;
   y=d/365;
   d=d%365;
   w=d/7;
   d=d%7;
   cout<<"No.of Years: "<<y<<endl<<"No.of weeks: "<<w<<endl<<"No.of days: "<<d;
   return 0;
}