// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends


   

// function to find the trapped water in between buildings
// arr: input array
// n: size of array
int trappingWater(int arr[], int n){
         int count=0;
            int lwala[n],rwala[n];
            int lmax=0,rmax=0;
            lwala[0] = arr[0];             //Initializing lmax
            rwala[n-1] = arr[n-1];         //Initializing rmax
for(int i=1;i<n-1;i++){     // calculating max value from left
   if(lwala[i-1]> arr[i])
lwala[i] = lwala[i-1];
else
lwala[i] = arr[i];
}
int j=0,sum=0;
for(int i=n-2; i>=0; i--){ 
if(rwala[i+1] > arr[i])  // calculating max value from right
rwala[i] = rwala[i+1];
else
rwala[i] = arr[i];
sum += max(min(rwala[i], lwala[i]) - arr[i],0);  // main magic 
}
for(int i=0;i<n;i++){
    //cout<<lwala[i]<<" "<<rwala[i]<<" \n";
   }

return sum;
    
}

// { Driver Code Starts.

int main(){
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        
        cin >> n;
        
        int a[n];
        
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        
        cout << trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends