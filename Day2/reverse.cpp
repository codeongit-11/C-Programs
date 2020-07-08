#include<iostream>
using namespace std;
 
int main()
{
    int x;
    int temp=0;
    cout<<"Enter a number:";
    cin>>x;
    while(x!=0)
    {
        temp=temp*10+(x%10);
        x/=10;
    }
    cout<<"Reverse of the number is :"<<temp;
    return 0;
}