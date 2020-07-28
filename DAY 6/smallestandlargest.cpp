#include<iostream>
using namespace std;

int main()
{
    int i,n,small,large;
    cout<<"Enter the size of the array : "<<"\n";
    cin>>n;
    int a[n];
    cout<<"Enter the elements in the array:"<<"\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    small=large=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<small)
            small=a[i];
        if(a[i]>large)
            large=a[i];
    }
    cout<<"The smallest number is ="<<small<<"\n";
    cout<<" The largest number is ="<<large<<"\n";
    return 0;
}


