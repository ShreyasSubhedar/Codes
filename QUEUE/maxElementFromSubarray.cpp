// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends




vector <int> max_of_subarrays(int *arr, int n, int k){
    vector<int> ans;
    deque<int>dQ;
    int i;
    for( i=0;i<k;i++){
        while(!dQ.empty()&&arr[i]>=arr[dQ.back()]){   // Only keeping the Max elements index in the window and dropping the rest.
        dQ.pop_back();
        }
        dQ.push_back(i);
    }
    for(;i<n+1;i++){
        ans.push_back(arr[dQ.front()]);          
        while(!dQ.empty()&&dQ.front()<=i-k){          // Maintaining the window size and dropping all those elemets which are not in the present window
        dQ.pop_front();
        }
        while(!dQ.empty()&&arr[i]>=arr[dQ.back()]){   // Only keeping the Max elements index in the window 
        dQ.pop_back();
        }
        dQ.push_back(i);
    }
    return ans;
}



// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    
	    vector <int> res = max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends


/*
-----------------------------------------------------------------------------
Input:
2
9 3
1 2 3 1 4 5 2 3 6
10 4
8 5 10 7 9 4 15 12 90 13
Output:
3 3 4 5 5 5 6
10 10 10 15 15 90 90
----------------------------------------------------------------------------
*/