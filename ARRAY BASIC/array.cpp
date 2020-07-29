#include<iostream>
using namespace std;

int main()
{
    int i ,a[10];
    cout<<"Enter the elements : "<<"\n";
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    cout<<"The elements in the array are : "<<"\n";
    for(i=0;i<10;i++)
    {
        cout<<a[i];
    }
    return 0;
}