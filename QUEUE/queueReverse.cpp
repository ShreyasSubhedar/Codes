//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;
queue<long long int> rev(queue<long long int> q);
int main()
{
    long long int test;
    cin>>test; 
    while(test--)
    {
    queue<long long int> q; 
    long long int n, var; 
    cin>>n; 
    while(n--)
    {
        cin>>var; 
        q.push(var);
    }
    queue<long long int> a=rev(q); 
    while(!a.empty())
    {
        cout<<a.front()<<" ";
        a.pop();
    }
    cout<<endl; 
    }
}// } Driver Code Ends


//function Template for C++

queue<long long int> rev(queue<long long int> q)
{
    stack<long long int >S;
    int a = q.size();
 //   cout<<a<<"\n";
    for(int i=0;i<a;i++){
        S.push(q.front());
        q.pop();
    }
    while(!S.empty()){
        q.push(S.top());
        
        S.pop();
    }
    return q;
}