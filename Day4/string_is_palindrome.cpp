#include<iostream>
using namespace std;
 
int main()
{
    int i,j,len,flag=1;
    char a[20];
    cout<<"\nEnter any string :: ";
    cin>>a;
 
    for(len=0;a[len]!='\0';++len);
        for(i=0,j=len-1;i<len/2;++i,--j)
        {
            if(a[j]!=a[i])
                flag=0;
        }
 
    if(flag==1)
        cout<<"\nThe Entered String [ "<<a<<" ] is Palindrome.\n";
    else
        cout<<"\nThe Entered String [ "<<a<<" ] is NOT Palindrome.\n";
 
    return 0;
}
