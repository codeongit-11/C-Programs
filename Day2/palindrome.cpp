#include<iostream>
using namespace std;
int main()
{
    int n,num,digit,rev=0;
    cout<<"Enter a number to check if it is a plaindrome or not :"<<endl;
    cin>>num;//121
    n=num;
    while(num!=0)
    {
        digit=(num%10);//digit=(121%10)=1//digit=(12%10)=2//1
        rev=(rev*10)+digit;//1//12//121
        num/=10;//num=(121/10)=12//1//0
    }
    if(rev==n)
    {
       cout<<"The number is a plaindrome."<<endl; 
    }
    else
    {
        cout<<"The number is not a palindrome."<<endl;
    }
    return 0;
}