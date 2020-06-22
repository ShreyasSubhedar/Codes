// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to calculate span
// price[]: price array in input
// n: size of array
vector <int> calculateSpan(int price[], int n)
{
    vector<int>S;
    stack<int> ST; 
    ST.push(0); 
    S.push_back(1);

    for (int i = 1; i < n; i++) { 
        while (!ST.empty() && price[ST.top()] <= price[i]) 
            ST.pop();
            if(ST.empty())
                S.push_back(i+1);
                else
            S.push_back(i-ST.top());
        ST.push(i); 
    }
    return S;
}


// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		
		vector <int> s = calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends