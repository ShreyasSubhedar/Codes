// { Driver Code Starts
// C++ program to evaluate value of a postfix expression
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// The main function that returns value of a given postfix expression
int evaluatePostfix(string &str)
{
    stack<int>S;
    for(int i=0;i<str.length();i++){
        if(str[i]>='0' && str[i]<='9')
        S.push((str[i]-48));
        else{
            int a = S.top();
                S.pop();
                int b= S.top();
                S.pop();
            if(str[i]=='/'){
                S.push(b/a);
            }
            if(str[i]=='*'){
                S.push(b*a);
            }
            if(str[i]=='+'){
                S.push(b+a);
            }
            if(str[i]=='-'){
                S.push(b-a);
            }
        }
      //  cout<<atoi(str[i])<<" ";
    }
    return S.top();
}


// { Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string str;
        cin>>str;
    
    cout<<evaluatePostfix(str)<<endl;
    }
    return 0;
}
  // } Driver Code Ends