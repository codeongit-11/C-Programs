#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(int arr[], int n)
{
    if(n==0 || n==1)
    return n;

    int res=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[res-1])
        {
            arr[res]=arr[i];
            res++;
        }
    }
    return res;
}
int main()
{
    int n;
    cout<<"Enter the size of array:"<<"\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the original array : "<<"\n";
    for(int i=0;i<n;i++)
    {
       cin>>arr[i];
    }
    n=removeDuplicates(arr,n);
    cout<<"Enter the updated array : "<<"\n";
    for (int i=0; i<n; i++) 
    cout << arr[i] << " ";
    return 0;
}