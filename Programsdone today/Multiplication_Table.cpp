#include<iostream>
using namespace std;
 
int main()
{
    int i,n,result=0;
 
    cout<<"Enter any number: ";
    cin>>n;
 
    cout<<" Multiplication Table of a given number "<<n<<" is: "<<endl;
    for(i=1;i<=10;i++)
    {
        result=n*i;
        cout<<"\t"<<n<<" * "<<i<<" = "<<result<<endl;
    }
 
    return 0;
}