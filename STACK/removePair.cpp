// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to return string after removing consecutive duplicates

// Function to remove pair of characters
string removePair(string str){
stack<char>st;
    string s;
    for(int i=0;i<str.length();i++){
        if(!st.empty()){
            if(st.top()==str[i])
            st.pop();
            else
            st.push(str[i]);
        }
        else
        st.push(str[i]);
    }
    string s3="";
    while(!st.empty())
    {s3+=st.top();
    st.pop();
    }
    reverse(s3.begin(),s3.end());
    return s3;
}

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        string s;
        cin>>s;
        
        string ans = removePair (s);
        
        if(ans=="")
            cout<<"Empty String"<<endl;
        else
            cout<<ans<<endl;
    }
    
	return 0;
}  // } Driver Code Ends