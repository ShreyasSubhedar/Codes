// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

stack<int> deleteMid(stack<int>s,int sizeOfStack,int current);

int main() {
    int testcases;
    cin>>testcases;
    
    while(testcases--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);
            
            
        }
        if(sizeOfStack==1)
        {
            cout<<myStack.top();
        }
        else
        {
        
            stack<int> modified=deleteMid(myStack,myStack.size(),0);
            
            
            while(!modified.empty())
            {
                cout<<modified.top()<<" ";
                modified.pop();
            }
        }
        cout<<endl;
        
    }   
	return 0;
}// } Driver Code Ends


//User function Template for C++

//You need to complete this function
stack<int> deleteMid(stack<int>s,int sizeOfStack,int current)
{
    vector<int>V;
    stack<int>alright;
    while(!s.empty()){
    if(current!=sizeOfStack/2){
        V.push_back(s.top());
        s.pop();
    }
    else{
        s.pop();
    }
    current++;    
    }
    reverse(V.begin(),V.end());
    for(auto i :V){
        alright.push(i);
    }
    return alright;
}
