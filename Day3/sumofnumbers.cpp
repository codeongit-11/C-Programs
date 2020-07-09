#include<iostream>
using namespace std;
 
int main()
{
    long int a,num,n,sum=0;
    cout<<"Enter any number: ";
    cin>>num;
    n=num;
 
    while(n>0)
    {
        a=n%10;
        n=n/10;
        sum=sum+a;
    }  
    cout<<"Sum of Digits of a Number "<<num<<" : "<<sum<<endl;
    return 0;
}