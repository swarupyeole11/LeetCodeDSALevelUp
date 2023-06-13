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
         
         return false;
     }
     
     bool checkCycleDfs(int node , vector<int> adj[], vector<int> &vis, int parent)
     {
         vis[node]=1;
         
         for(auto it: adj[node])
         {
             if(!vis[it])
             {
                 if(checkCycleDfs(it,adj,vis,node)==true)
                 {
                     return true;
                 }
             }
             
             else if(it!=parent)
            {
                return true;
            }
             
             
         }
         
         return false;
         
     }
     
     
     
  
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {


        vector<int> vis(V,0);

// BFS code
        
        int cyclecount=0;
        
        for(int i=0; i<V; i++)
        {
            if(!vis[i])
            {
                if(checkCycleBfs(i,adj,vis)==true)
                {
                    cyclecount++;
                    return true;
                }
            }
        }



// DFS code

/*
       for(int i=0; i<V; i++)
       {
           if(!vis[i])
           {
               if(checkCycleDfs(i,adj,vis,-1)==true)
               {
                   return true;
               }
           }
       }
       
*/
        //Code to count number of cycles in an undirecred graph
        // cout<<cyclecount<<" ";
        
        
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