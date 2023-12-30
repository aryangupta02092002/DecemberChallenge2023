//{ Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes
    vector<string> winner(string arr[],int n) { 
        string winner; 
        int votes=INT_MIN; 
        map<string,int> m; 
        
        for(int i=0; i<n; i++){ 
            string a=arr[i]; 
            m[a]++;
        } 
        
        for(auto a:m){ 
            if(a.second>votes){
                winner=a.first; 
                votes=a.second;
            } 
            
        }
        return {winner,to_string(votes)};
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}

// } Driver Code Ends
