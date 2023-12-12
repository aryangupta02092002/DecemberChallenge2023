//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int dp[501][501];
    int solve(vector<vector<int>>&M, int i, int j)
    {
        if(j>=M[0].size()){
            return 0;
        }
        
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
      
        int ans1=0,ans2=0,ans3=0;
        
        //right
        if(j+1 < M[0].size()){
            ans1 = ans1 + M[i][j+1] + solve(M, i, j+1);
        }
        
        //up right
        if(j+1 < M[0].size() && i-1 >= 0){
            ans2 = ans2 + M[i-1][j+1] + solve(M, i-1, j+1);
        }
        
        //down right
        if(j+1 < M[0].size() && i+1 < M.size()){
            ans3 = ans3 + M[i+1][j+1] + solve(M, i+1, j+1);
        }
        
        dp[i][j] = max(ans1, max(ans2, ans3));
        return dp[i][j];
    }
    int maxGold(int n, int m, vector<vector<int>> M)
    {
        // code here
        memset(dp,-1,sizeof(dp));
        int ans = 0;
        for(int i=0; i<n; i++){
            ans=max(ans, M[i][0] + solve(M, i, 0));
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<int>> M(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++)
                cin>>M[i][j];
        }
        
        Solution ob;
        cout<<ob.maxGold(n, m, M)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
