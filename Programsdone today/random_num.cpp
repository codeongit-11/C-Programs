#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int n,t,i;
     cout<<"Enter the number of random numbers you want:"<<endl;
     cin>>n;
     for(i=1;i<=n;i++)
     {
         t=rand();
         cout<<t<<"\t";
     }
     return 0;
}