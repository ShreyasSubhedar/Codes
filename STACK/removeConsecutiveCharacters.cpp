// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to print string after removing consecutive duplicates


string removeConsecutiveDuplicates(string s)
{stack<char>s1;
string s2="";
for(int i=0;i<s.length();i++){
    if(!s1.empty()){
        if(s1.top()==s[i]){}
        else{
        s1.push(s[i]);
        s2+=s[i];
            
        }
    }
    else{
    s1.push(s[i]);
    s2+=s[i];
    }
}
    return s2;
}


// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        string s;
        cin>>s;
        cout<<removeConsecutiveDuplicates(s)<<endl;
    }
    
	return 0;
}  // } Driver Code Ends