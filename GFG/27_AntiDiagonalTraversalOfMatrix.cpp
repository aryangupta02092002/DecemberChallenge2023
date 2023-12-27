//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> antiDiagonalPattern(vector<vector<int>> matrix) 
    {
        // Code here
        int n = matrix.size();
        int i=0, j = 0, k = 0, in = 0;
        bool bo = false;
        vector<int> ans;
        
        while(i<n && j<n){
            ans.push_back(matrix[i][j]);
            i++;
            j--;
            if(j<0 || i==n){
                k++;
                if(i==n)
                    bo = true;
                if(bo){
                    in++;
                    k--;
                }
                j = k;
                i = in;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> matrix;
        matrix.resize(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> ans = ob.antiDiagonalPattern(matrix);
        for (int i = 0; i < ans.size(); ++i) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
