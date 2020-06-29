// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std;


 // } Driver Code Ends


// Function to find element in sorted array
// arr: input array
// N: size of array
// K: element to be searche
int binarySearch(int arr[],int low, int high, int ele ){
    if(low<=high){
    int mid=(high+low)/2;
    if(ele==arr[mid])
    return 1;
    else if(ele<arr[mid])
        return binarySearch(arr,low,mid-1,ele);
        else
        return binarySearch(arr,mid+1,high,ele);
    }
    else
    return -1;
}
int searchInSorted(int arr[], int N, int K) 
{ 

 return binarySearch(arr,0,N,K);
 
   
}

// { Driver Code Starts.


int main(void) 
{ 
    
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        cout << searchInSorted(arr, n, k) << endl;

    }

	return 0; 
} 
  // } Driver Code Ends