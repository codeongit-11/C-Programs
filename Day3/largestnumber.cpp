#include<iostream>
using namespace std;
int main()
{
    int i,n,arr[100];
    cout<<"Enter total number of elements(1 to 100): ";
    cin>>n;
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter total number of elements :" <<i+1<<" : ";
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
       if(arr[i]>max)
       {
           max=arr[i];
       }
    }
    cout<<"Maximum value : "<<max<<endl;
    return 0;
}