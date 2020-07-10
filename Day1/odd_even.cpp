#include<iostream>
using namespace std;
 
int main()
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;
 
    if(a%2==0)
    {
       cout<<" The number "<<a<<" is even number."<<endl;
    }
    else
    {
        cout<<" The number "<<a<<" is odd number."<<endl;
    }
    return 0;
}