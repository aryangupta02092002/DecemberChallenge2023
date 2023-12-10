//{ Driver Code Starts
// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
        unordered_set<int> u;
        int sum=0;
        
        for(int i=0;i<n;i++){
            sum += arr[i];
            if(sum==0){
                return true;
            }
            if(u.find(sum) != u.end()){
                return true;
            }
            u.insert(sum);
        }
        return false;
    }
};

/*
  bool subArrayExists(int arr[], int n)
    {
        //Your code here
        for(int i=0; i<n; i++){
            if(arr[i] == 0){
                return true;
            }
        }
        
        long long suf[n];
        suf[n-1] = arr[n-1];
        
        for(int i=n-2; i>=0; i--){
            suf[i] = suf[i+1] + (1LL * arr[i]);
        }
        unordered_map<long long int, long long int> u;
        for(int i=0; i<n; i++){
            u[suf[i]] = 1;
        }
        
        if(u.size() != n){
            return true;
        }
        return false;
    }
*/

//{ Driver Code Starts.
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution obj;
	    	if (obj.subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}
// } Driver Code Ends
