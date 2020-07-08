#include<iostream>
 
using namespace std;
 
int main()
{
    char ch;
    cout<<"Enter any character to check :: ";
    cin>>ch;
 
    if(ch>=65&&ch<=90)
    {
        cout<<" The Entered Character "<<ch<<" is an UPPERCASE character."<<endl;
    }
    else if(ch>=97&&ch<=122)
    {
        cout<<" The Entered Character "<<ch<<" is a Lowercase character."<<endl;
    }
    else if(ch>=48&&ch<=57)
    {
        cout<<" The Entered Character  "<<ch<<" is a Digit."<<endl;
    }
    else
    {
        cout<<" The Entered Character   "<<ch<<" is an SPECIAL character."<<endl;
    }
 
    return 0;
}