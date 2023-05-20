//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    
    void bfs(int node, vector<int> adj[] , vector<int> &vis , vector<int> &ans)
    {
        queue<int> Q;
        Q.push(node);
        vis[node]=1;
        
        while(!Q.empty())
        {
            int node = Q.front();
            ans.push_back(node);
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
    
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        
        vector<int> vis(V,0);
        vector<int> ans;
        
        // for(int i=0;i<V;i++)
        // {
        //     if(!vis[i])
        //     {
        //         bfs(i,adj,vis,ans);
        //     }
        // }
        
          bfs(0,adj,vis,ans);
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends