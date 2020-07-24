// Iterative C++ program to reverse an array 
#include <bits/stdc++.h> 
using namespace std; 
  
/* Function to reverse arr[] from start to end*/
void reverseArray(int arr[], int low, int high) 
{ 
    while (low < high) 
    { 
        int temp = arr[low];  
        arr[low] = arr[high]; 
        arr[high] = temp; 
        low++; 
        high--; 
    }  
}      
  
/* Utility function to print an array */
void printArray(int arr[], int size) 
{ 
   for (int i = 0; i < size; i++) 
   cout << arr[i] << " "; 
  
   cout << endl; 
}  
  
/* Driver function to test above functions */
int main()  
{  
    int n;
    cout<<"Enter the size of the array:"<<"\n";
    cin>>n; 
    int arr[n];
    cout<<"Enter the elements :"<<"\n";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    } 
    // To print original array 
    cout<<"Original array is :"<<"\n"; 
    printArray(arr, n);   
    // Function calling 
    reverseArray(arr, 0, n-1);  
    cout << "Reversed array is:" << endl;  
    // To print the Reversed array 
    printArray(arr, n); 
      
    return 0; 
} 