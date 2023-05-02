//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
    int fx(int n,vector<long long int> &dp)
    {
        int mod = 1000000000 + 7;
        if(n<=1)
        {
          return n;
        }
        
        if(dp[n]!=-1)
        {
            return dp[n]%mod;
        }
        
        return dp[n]=(fx(n-1,dp)+fx(n-2,dp))%mod;
         
    }
    
    long long int topDown(int n) {
        
        vector<long long int> dp(n+1,-1);
        return fx(n,dp);
    }
    
    long long int bottomUp(int n) {
        
        // //step1 intlize the dp array
        // vector<long long int> dp(n+1,-1);
        
        // //step2 intalize the base values
        // dp[0]=0;
        // dp[1]=1;
        
        // //step3 loop over the rest of the values
        // for(int i=2;i<=n;i++)
        // {
        //     dp[i]=dp[i-1]+dp[i-2];
        // }
        
        // //step4 return the orginal value 
        // return dp[n];
        
        
        
        vector<long long int> dp(n+1,-1);
        return fx(n,dp);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;
        long long int topDownans = obj.topDown(n);
        long long int bottomUpans = obj.bottomUp(n);
        if (topDownans != bottomUpans) cout << -1 << "\n";
        cout << topDownans << "\n";
    }
}
// } Driver Code Ends