#include<iostream>
using namespace std;
 
int main()
{
   int num,first=0,second=1,next;
   cout<<"Enter the number of terms to be printed in the fibonacci series: "<<endl;
   cin>>num;
   cout<<"Fibonacci series:"<<endl;
   for(int i=0;i<num;i++)
   {
       cout<<first<<endl;//0//1
       next=first+second;//1//2
       first=second;//1//1
       second=next;//1//2
   }
   return 0;
}