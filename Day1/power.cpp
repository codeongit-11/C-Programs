#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int x,n,result;
    cout<<"Enter the number x: ";
    cin>>x;
    cout<<"Enter the number which is the power of x:";
    cin>>n;
    result=pow(x,n);
    cout<<"The power of number is:"<<result;
    return 0;
}