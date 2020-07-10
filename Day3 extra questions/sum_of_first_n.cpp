#include<iostream>
 
using namespace std;
 
int main()
{
    int i,n,sum=0;
    cout<<"Enter the range of natural number: ";
    cin>>n;
    for(i=1;i<=n;++i)
    {
        sum+=i;
    }
    cout<<"\nSum of first [ "<<n<<" ] Numbers are = "<<sum<<"\n";
    return 0;
}