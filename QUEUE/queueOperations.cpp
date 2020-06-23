// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


//User function Template for C++


 // Function to push element on rear of queue
void enqueue(queue<int> &s,int x)
{
s.push(x);}
 // Function to remove front element from queue
void dequeue(queue<int> &s)
{
    s.pop();
}
 // Function to find the front element of queue
int front(queue<int> &s)
{
    return s.front();
}
 // Function to find the element in queue. Return "Yes" or "No".
string find(queue<int> s, int val)
{
    while(!s.empty()){
        if(val==s.front())
        return "Yes";
        s.pop();
    }
    return "No";
}

// { Driver Code Starts.


int main() {
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
	    queue<int> s;
	    int q;
	    cin>>q;
	    while(q--){
	        char ch;
	        cin>>ch;
	        
	        if(ch=='i')
	        {
	            int x;
	            cin>>x;
	            
	            enqueue(s,x);
	            
	        }
	        else if(ch=='r')
	        {
	            dequeue(s);
	        }
	        else if(ch=='h')
	        {
	            cout << front(s) << endl;
	        }
	        else if(ch=='f')
	        {
	            int x;
	            cin>>x;
	            cout << find(s,x) << endl;
	        }
	        
	    }
	}
	return 0;
}


  // } Driver Code Ends
