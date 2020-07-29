#include<iostream>
using namespace std;

int main()
{
    int i,j,r,c;
    cout<<"Enter the size of row: "<<"\n";
    cin>>r;
    cout<<"Enter the size of column : "<<"\n";
    cin>>c;
    int a[r][c];
    cout<<"Enter the elements in the two D array: "<<"\t\n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Elements in the two D array are :"<<"\n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<a[i][j]<<"\t";
        }
    }
    return 0;
}