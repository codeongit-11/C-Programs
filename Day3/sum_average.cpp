#include<iostream>
using namespace std;
 
int main()
{
    float a,b,c,sum,avg;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"\nEnter second number : ";
    cin>>b;
    cout<<"\nEnter third number : ";
    cin>>c;
    sum=a+b+c;
    avg=sum/3;
    cout<<" The sum of three numbers "<<a<<" + "<<b<<" + "<<c<<" = "<<sum<<endl;
    cout<<" The average of three numbers "<<a<<", "<<b<<", "<<c<<" = "<<avg<<endl;
    return 0;
}
