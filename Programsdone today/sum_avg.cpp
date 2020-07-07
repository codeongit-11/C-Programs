#include<iostream>
using namespace std;
int main()
{
    int a,b,c,sum,avg;
    cout<<"Enter first number:"<<endl;
    cin>>a;
    cout<<"Enter second number:"<<endl;
    cin>>b;
    cout<<"Enter third number:"<<endl;
    cin>>c;
    sum=a+b+c;
    avg=sum/3;
    cout<<"Sum of three number is: "<<sum<<endl;
    cout<<"Average of three number is: "<<avg<<endl;
    return 0;

}