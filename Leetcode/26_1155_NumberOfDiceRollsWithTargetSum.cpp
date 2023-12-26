class Solution {
public:
    int mod = 1e9 + 7;
    
    int solve(int n, int k, int tar, vector<vector<int>> &dp) {
        
        if(n == 0 && tar == 0) 
            return 1;
        if(n == 0) 
            return 0;
        if(dp[n][tar] != -1) 
            return dp[n][tar];
            
        int ans = 0;
        for(int i = 1; i <= k; i++) {
            if(tar - i >= 0) {
                ans += solve(n - 1, k, tar - i, dp); 
                ans %= mod;    
            }
        }
        
        return dp[n][tar] = ans;
    }
    
    int numRollsToTarget(int n, int k, int target) {
        
        vector<vector<int>> dp(n+1, vector<int> (target + 1, -1));
        return solve(n, k, target, dp);
    }
};
