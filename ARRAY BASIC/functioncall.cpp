#include<iostream>
using namespace std;

void func(int val[]);
int main()
{
    int i , n;
    cout<<"Enter the size of array"<<"\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array : "<<"\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    func(arr);
    cout<<"Content of the array are now :"<<"\n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;
}
void func(int val[])
{
    int sum=0,i,n;
    cout<<"Enter the size of array"<<"\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
         val[i]=val[i]*val[i];
         sum+=val[i];
    }
    cout<<"Sum of the squares = "<<sum<<"\n";
}