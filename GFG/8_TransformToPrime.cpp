//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    int isPrime(int sum){
        int count = 0;
        for(int i=2; i<sum; i++){
            if(sum % i == 0){
                sum++;
                count++;
                i = 1;
            }
        }
        return count;
    }
    int minNumber(int arr[],int N)
    {
        int sum = 0;
        for(int i=0; i<N; i++){
            sum += arr[i];
        }
        if(sum == 1){
            return 1;
        }
        int ans = isPrime(sum);
        return ans;
    }
};


//{ Driver Code Starts.

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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
        cout << obj.minNumber(arr, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends
