#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
     cout<<" Numbers before swapping :"<<endl;
     cout<<"\t a= "<<a<<"\t b="<<b<<endl;
     a=a+b;
     b=a-b;
     a=a-b;
     cout<<" Numbers after swapping :"<<endl;
     cout<<"\t a= "<<a<<"\t b="<<b<<endl;

}