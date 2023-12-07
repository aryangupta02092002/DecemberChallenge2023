//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    long countSubarrays(int a[], int n, int L, int R)
    {
        // Complete the function
        int tmp = 0;
        long long ans = 0;
        int idx = -1;
        
        for(int i=0; i<n; i++){
            if(a[i] > R){
                tmp = i+1;
                idx = -1;
                continue;
            }
            else if(a[i] <= R && a[i] >= L){
                idx = i;
            }
            
            if(idx != -1){
                ans += idx - tmp + 1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
// driver program
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        
        int n ,l,r;
        cin >> n>>l>>r;
        int a[n];
        for(int i=0;i<n;i++)
        cin >> a[i];
        Solution ob;
    	cout << ob.countSubarrays(a, n, l, r)<<endl;
    }
	return 0;
}

// } Driver Code Ends
