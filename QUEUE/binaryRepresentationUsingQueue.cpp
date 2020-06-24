// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long


 // } Driver Code Ends


// Function to print all binary numbers upto n

vector<string> generate(ll n)
{
vector<string>V;
queue<string>S;
    string s1 = "1";
    S.push(s1);
    for(int i=0;i<n;i++){
        string s2 = S.front();
        string s3= S.front();
        V.push_back(S.front());
        S.pop();
        S.push(s2+'0');
        S.push(s3+'1');
    }
    return V;
}


// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		vector<string> ans = generate(n);
		for(auto it:ans) cout<<it<<" ";
		cout<<endl;
	}
	return 0;
}  // } Driver Code Ends