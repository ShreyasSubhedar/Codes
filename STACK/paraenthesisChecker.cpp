// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to return if the paranthesis are balanced or not
bool ispar(string x)
{
    stack<char>para;
    for(int i=0;i<x.length();i++){
        if(!para.empty()){
            if((para.top()=='{' && x[i]=='}')||(para.top()=='[' && x[i]==']')||(para.top()=='(' && x[i]==')'))
            para.pop();
            else
            para.push(x[i]);
        }
        else
        para.push(x[i]);

    }
    return para.empty()?true:false; 
}


// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       if(ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends