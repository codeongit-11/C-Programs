#include<iostream>
#include<math.h>
using namespace std;
 
int main()
{
    int num;
    double ans;
    cout<<"Enter number which u want to find cube root: ";
    cin>>num;
    ans=(double)pow((double)num,(double)1/(double)3);
    cout<<" Cube Root of "<<num<<" is : "<<ans<<endl;
    return 0;
}