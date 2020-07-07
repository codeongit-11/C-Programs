#include<iostream>
#include<math.h>
using namespace std;
 
int main()
{
    float p,r,t,n,ci;
 
    cout<<"Enter Principle (Amount): ";
    cin>>p;
    cout<<"\nEnter Rate of Interest: ";
    cin>>r;
    cout<<"\nEnter no. of times interest is compounded per unit t: ";
    cin>>n;
    cout<<"\nEnter Time Period: ";
    cin>>t;
 
    ci = p*pow((1+r/(100*n)),(n*t));
    cout<<"\nThe Calculated Compound Interest is = "<<ci<<"\n";
    return 0;
}
