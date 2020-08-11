class Solution {
public:
    int coinChange(vector<int>& coins, int sum) {
        long long int inf=10000000;
        long long int dp[sum+1];
        dp[0]=0;
        for(int i=1;i<sum+1;i++)
            dp[i]=inf;
        for(int i=0;i<coins.size();i++)
            if(coins[i]<sum+1)
            dp[coins[i]]=1;
        for(int i=1;i<sum+1;i++){
            for(int j=0;j<coins.size();j++){
                if(i>=coins[j]&&(i-coins[j])<sum+1){
                    // cout<<i<<" ";
                    // cout<<dp[coins[j]]<<" ";
                    // cout<<dp[i-coins[j]]<<" \n";
                  dp[i]=min(dp[i],dp[coins[j]]+dp[i-coins[j]]);
                }
            }
        }
        // for(int i=0;i<sum+1;i++)
        //     cout<<dp[i]<<" ";
        if(dp[sum]>=inf)
            return -1;
        return dp[sum];
        
        
        
    }
};