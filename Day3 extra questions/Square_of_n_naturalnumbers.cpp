#include<iostream>
using namespace std;
int main()
{
    unsigned long n,i,sum=0,a;
    cout<<"Enter a number : ";
    cin>>n;
    for(i=1;i<=n;++i)
    {
        a=i*i;
        sum+=a;
    }
    cout<<"\nSum of square of first "<<n<<" natural = "<<sum<<endl;
    return 0;
}