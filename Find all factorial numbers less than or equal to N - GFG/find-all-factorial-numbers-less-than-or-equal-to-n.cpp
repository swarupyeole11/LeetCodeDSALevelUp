//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:

 
    vector<long long> factorialNumbers(long long N)
    {   
        vector<long long> ans;
        long long val =1;
        for(int i=1;i<=N;i++)
        {
            val = val*i;
            if(val>N)
              break;
            else
              ans.push_back(val);
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin>>N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for(auto num : ans){
            cout<<num<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
// } Driver Code Ends