#include<iostream>
using namespace std;

int main()
{
    int p,n,i;
    cout<<"Enter the size of th array : "<<"\n";
    cin>>p;
    int m[p];
    cout<<"Enter the element to be searched: "<<"\n";
    cin>>n;
    cout<<"Enter the element in the array:"<<"\n";
    for( i=0;i<p;i++)
    {
         cin>>m[i];
    }
    for(i=0;i<p;i++)
    {
         if(m[i]=n)
         {
             cout<<"True";
         }
         else
         {
             cout<<"False";
         }
    }
    return 0;
}