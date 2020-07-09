#include<iostream>
#include<math.h>   
using namespace std;
int main()
{
    int x,n,result;
    cout<<"Enter value of x: ";
    cin>>x;
    cout<<"\nEnter value of n: ";
    cin>>n;
    result=pow(x,n);
    cout<<" The Power of number is: "<<x<<" ^ "<<n<<" = "<<result<<endl;
    return 0;
}
