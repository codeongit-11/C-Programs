#include<iostream>
using namespace std;

int main()
{
    int i,n;
    cout<<"Enter the size of the array:"<<"\n";
    cin>>n;
    int arr[n];
    cout<<"Input :"<<"\t \n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
            if(arr[i]%2 == 0)
            {
                arr[i]=0;
            }
            else
            {
                arr[i]=1;
            }
    } 
    cout<<"Output:"<<"\t \n";
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    } 
    return 0;
}