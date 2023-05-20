//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  
    void bfs(int node , vector<int> adj[], vector<int> &vis)
    {
        queue<int> Q;
        Q.push(node);
        vis[node]=1;
        
        while(!Q.empty())
        {
            int node = Q.front();
            Q.pop();
            
            for(auto it : adj[node])
            {
                if(!vis[it])
                {
                    vis[it]=1;
                    Q.push(it);
                }
            }
        }
    }
    
    int numProvinces(vector<vector<int>> adj, int V) {
        
       vector<int> adja[V+1];
       vector<int> vis(V+1,0);
       // since there is no zero node so just to be safe
       vis[0]=1;
       
       
       for(int i=0 ; i<V;i++)
        {
            for( int j=0 ; j<V; j++)
            {
               if(adj[i][j]==1 && i!=j)
               {
                  adja[i+1].push_back(j+1);
                //   adja[j+1].push_back(i+1);   No need for this as the matrix already handles it 
               }
            }
        }
        
         /** TO PRIN THE AJACENCY LIST*/
        // for(int i=1 ; i<=V;i++)
        // {
        //     for(auto it : adja[i])
        //     {
        //         cout<<it<<" ";
        //     }
            
        //     cout<<endl;
        // }
        
        int count =0;
        for(int i=1; i<=V; i++)
        {
            if(!vis[i])
            {
                count++;
                bfs(i,adja,vis);
            }
        }
        
        return count;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends