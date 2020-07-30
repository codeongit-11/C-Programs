#include<iostream>
using namespace std;

int main()
{
    int i,j,r,c;
    cout<<"Enter the size of row: "<<"\n";
    cin>>r;
    cout<<"Enter the size of column : "<<"\n";
    cin>>c;
    int mat1[r][c],mat2[r][c],mat3[r][c];
    cout<<"Enter the elements in the first matrix : "<<"\n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>mat1[i][j];
        }
    }
    cout<<"Enter the elements in the second matrix : "<<"\t";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>mat2[i][j];
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            mat3[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    cout<<"The resultant matrix mat3 is : "<<"\n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<mat3[i][j]<<"\t";
        }
    }
    return 0;
}