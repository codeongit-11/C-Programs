#include<iostream>
using namespace std;
 
int main()
{
    int n,num,c=0;
    cout<<"Enter a positive integer : ";
    cin>>n;
    num=n;
    while(num>0)
    {
        num=num/10;
        c++;
    }
    cout<<" Total number of digits in a number "<<n<<" is : "<<c<<endl;
   return 0;
}