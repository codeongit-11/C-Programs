#include<iostream>
using namespace std;
 
void gcd(int,int);
int main()
{
    int a,b;
 
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"\nEnter second number : ";
    cin>>b;
    gcd(a,b);
    return 0;
}
 
void gcd(int a,int b)
{
    int m,n;
    m=a;
    n=b;
    while(m!=n)
    {
        if(m>n)
            m=m-n;
        else
            n=n-m;
    }
    cout<<"\nH.C.F of "<<a<<" and "<<b<<" is: "<<m<<endl;
}