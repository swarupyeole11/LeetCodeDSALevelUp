//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    
  private :
     bool checkCycleBfs(int inode , vector<int>adj[] , vector<int> &vis)
     {
         queue<pair<int,int>> Q;
         Q.push({inode,-1});
         vis[inode]=1;
         
         while(!Q.empty())
         {
             int node = Q.front().first;
             int parent = Q.front().second;
             Q.pop();
             
             for(auto it : adj[node])
             {
                if(!vis[it])
                {
                    vis[it]=1;
                    Q.push({it,node});
                }
                
                // if visited and is not a parent then defiently a cycle exists
                else if(it!=parent)
                {
                    return true;
                }
             }
         }
     }
  
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        vector<int> vis(V,0);
        for(int i=0; i<V; i++)
        {
            if(!vis[i])
            {
                if(checkCycleBfs(i,adj,vis)==true)
                {
                    return true;
                }
            }
        }
        
        
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends