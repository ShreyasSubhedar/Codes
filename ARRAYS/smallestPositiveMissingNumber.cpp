// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Functio to find first smallest positive
// missing number in the array
int missingNumber(int arr[], int n) { 
long min=1000000;  
int arr1[min];
 memset(arr1, -1, min*sizeof(arr1[0]));
   for(int i=0;i<n;i++){
       if(arr[i]>0)
       {
        arr1[arr[i]]=1;
       }
   }
   for(int i=1;i<min;i++){
       if(arr1[i]==-1)
       return i;
   }
    
} 

// { Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)cin>>arr[i];
        cout<<missingNumber(arr, n)<<endl;
    }
    return 0; 
}   // } Driver Code Ends