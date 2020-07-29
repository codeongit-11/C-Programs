#include<iostream>
using namespace std;
int main()
{
    int i,j,n,temp=0;
    cout<<"Enter the size of the array :"<<"\n";
    cin>>n;
    int a[n];
    cout<<"Enter the elements in the array : "<<"\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0,j=n-1; i<j; i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    cout<<"The reversed array is : "<<"\n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}