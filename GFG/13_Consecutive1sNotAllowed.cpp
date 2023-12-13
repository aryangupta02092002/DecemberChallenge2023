//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// #define ll long long
	ll countStrings(int n) {
	    // code here
	    vector<ll> fib(n+2, 0);
	    fib[0] = 1;
	    fib[1] = 1;
	    
	    for(ll i=2; i<=n+1; i++){
	        fib[i] = (fib[i-1] + fib[i-2]) % 1000000007;
	    }
	    return (fib[n+1] % 1000000007);
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.countStrings(n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
