// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find subarray with maximum sum
// arr: input array
// n: size of array
int maxSubarraySum(int arr[], int n){
    
    int tempSum=0;
    int maxSum=INT_MIN;
 for(int i=0;i<n;i++){
     tempSum+=arr[i];
     maxSum = max(maxSum,tempSum);
     if(tempSum<0)
     tempSum=0;
 }
 if(maxSum==INT_MIN)
 return -1;
 return maxSum;
    
}

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
        
        cout << maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends