#include<iostream>
using namespace std;

int main()
{
    int i,j,count=0,n;
    cout<<"Enter the size of the array:"<<"\n";
    cin>>n;
    int arr[n],b[n];
    cout<<"Input :"<<"\t\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2 == 0)
        {
          count++;
        }
    } 
    cout<<"Total number of even numbers:"<<count<<"\n";
    int odd_num=n-count;
    cout<<"Total number of odd numbers :"<<odd_num<<"\n";
    int e=0,o=2;
    for(i=0;i<n;i++)
    {
          if(arr[i]%2==0)
          {
            b[e]=arr[i];
            e++;
          }
          else
          {
            b[o]=arr[i];
            o++;
          }
              
     }
    cout<<"Output:"<<"\t \n";
    for(i=0;i<n;i++)
    { 
       cout<<b[i]<<" ";
    }
    return 0;
}