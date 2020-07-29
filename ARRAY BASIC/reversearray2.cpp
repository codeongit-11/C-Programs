#include<iostream>
using namespace std;
int main()
{
    int n,temp=0;
    cout<<"Enter the size of the array :"<<"\n";
    cin>>n;
    int a[n],i=0,j=n-1;
    cout<<"Enter the elements in the array : "<<"\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    while(i<j)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
         i++;
         j--;
    }
    cout<<"The reversed array is : "<<"\n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}