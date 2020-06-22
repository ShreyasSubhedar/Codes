// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

stack<int>_push(int arr[],int n);

void _getMinAtPop(stack<int>s);

 // } Driver Code Ends


//User function Template for C++

/* inserts elements of the array into 
   stack and return the stack
*/
stack<int>_push(int arr[],int n)
{
    stack<int>S;
   for(int i=0;i<n;i++){
       if(!S.empty()){
       if(S.top()<arr[i])
       S.push(S.top());
       else
       S.push(arr[i]);
       
       }
       else{
           S.push(arr[i]);
       }
   }
   return S;
}

/* print minimum element of the stack each time
   after popping
*/
void _getMinAtPop(stack<int>s)
{
    while(!s.empty()){
        int a = s.top();
    s.pop();
    cout<< a<<" ";
    }
}

// { Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    stack<int>mys=_push(arr,n);
	    _getMinAtPop(mys);
	    cout<<endl;
	    
	    
	    
	}
	return 0;
}

  // } Driver Code Ends