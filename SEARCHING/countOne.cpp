// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


// Function to count number of Ones
// arr: input array 
// N: size of input array
int countOnes(int arr[], int N)
{
        int low = 0;
	int high = N-1;
	int lastIndex = 0;
	while(low<=high){
		int mid= (high+low)/2;
		if(arr[mid]==1 && (mid==N-1 || arr[mid+1]!=1)){
			lastIndex =  mid+1;
			break;
		}
		if(arr[mid]<1)
			high = mid-1;
		else
			low = mid+1;
	}
	return lastIndex;
}


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        int *arr = new int[n]; 
        for(int i = 0; i < n; i++)
            cin>>arr[i];
        
        cout <<countOnes(arr, n)<<endl;
    }
    return 0;
}  // } Driver Code Ends