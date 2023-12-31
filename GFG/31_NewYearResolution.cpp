//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
    
    public:
    int isPossible(int N , int coins[]) 
    {
        function<bool(int,int)>help = [&](int i , int s)->bool{ 
            if(i==N) { 
                return s!=0 && (s%20==0||s%24==0||s==2024); 
                
            } 
            bool res = help(i+1,s+coins[i]) || help(i+1,s); 
            return res;
        }; 
        return help(0,0);
    }
    
};




//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int coins[N];
        for(int i=0 ; i<N ; i++)
            cin>>coins[i];

        Solution ob;
        cout << ob.isPossible(N,coins) << endl;
    }
    return 0;
}
// } Driver Code Ends
