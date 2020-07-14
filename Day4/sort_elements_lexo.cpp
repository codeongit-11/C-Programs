#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cout<<"How many Strings u want to Sort :: ";
    cin>>n;
    string str[n], temp;
 
    cout << "\nEnter [ "<<n<<" ] Strings Below :: " << endl;
 
    for(int i = 0; i < n; i++)
    {
        cout<<"\nEnter [ "<<i+1<<" ] String :: ";
        cin>>str[i];
    }
 
    for(int i = 0; i < n-1; ++i)
       for( int j = i+1; j < n; ++j)
       {
          if(str[i] > str[j])
          {
            temp = str[i];
            str[i] = str[j];
            str[j] = temp;
          }
    }
 
    cout << "\nAfter Sorting [ "<<n<<" ] Strings in lexicographical order :: \n" << endl;
 
    for(int i = 0; i < n; ++i)
    {
       cout << str[i] << endl;
    }
 
    return 0;
}
