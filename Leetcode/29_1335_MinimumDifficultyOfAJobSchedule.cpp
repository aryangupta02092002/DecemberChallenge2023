class Solution {
public:
    int dp[301][11];
    int helper(vector<int>& mat, int n, int idx, int d) {
        if(d == 1)
            return *max_element(begin(mat)+idx, end(mat));
        
        if(dp[idx][d] != -1)
            return dp[idx][d];
    
        
        int Max = INT_MIN;
        int result = INT_MAX;
        
        for(int i = idx; i<=n-d; i++) {
            Max = max(Max, mat[i]);
            result = min(result, Max + helper(mat, n, i+1, d-1));
        }
        return dp[idx][d] = result;
    }
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        int sz = jobDifficulty.size();
        if(sz < d){
            return -1;
        }
        memset(dp, -1, sizeof(dp));
        return helper(jobDifficulty, sz, 0, d);
    }
};
