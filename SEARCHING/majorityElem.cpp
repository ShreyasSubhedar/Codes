// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find majority element in the array
// a: input array
// size: size of input array
int majorityElement(int a[], int size)
{
    
 int maj_index = 0, count = 1; 
    
    // iterate over the array elements
    // to find candidate for majority element
    for (int i = 1; i < size; i++) 
    { 
        
        if (a[maj_index] == a[i]) 
            count++; 
        else
            count--; 
        if (count == 0) 
        { 
            maj_index = i; 
            count = 1; 
        } 
    } 
    return a[maj_index]; 
}

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        cout << majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends