//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    
  private:
  
   bool dfs(int node, vector<int> adj[], vector<int>&vis, vector<int> &pathvis)
   {
       vis[node]=1;
       pathvis[node]=1;
       
       for(auto it : adj[node])
       {
           if(!vis[it])
           {
               vis[it]=1;
               pathvis[it]=1;
               if(dfs(it,adj,vis,pathvis)==true)
                 return true;
           }
           // i.e if the element is visted and is in the same path definetly there is a cycle
           else if(pathvis[it]==1)
           {
               return true;
           }
       }
       
       pathvis[node]=0;
      
       
       return false;
   }
  
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
      
       vector<int> vis(V,0);
       vector<int> pathvis(V,0);
       
       for(int i=0; i<V; i++)
       {
           if(!vis[i])
           {
               // for any vertices for a non connected graph a cycle exist then the graph is cyclic
               if(dfs(i,adj,vis,pathvis)==true)
               {
                   return true;
               }
           }
       }
 
    
       return false;
     
    
    }
};

/*      vector<int> indegree(V,0);
      queue<int> Q;
      
      for(int i=0; i<V; i++)
      {
          for(auto it : adj[i])
          {
              indegree[it]++;
          }
      }
      
     // pushing the elements with degree 0
     for(int i=0; i<V; i++)
     {
        if(indegree[i]==0)
        {
            Q.push(i);
        }
     }
     
     int count = 0;
     
     while(!Q.empty())
     {
         int node = Q.front();
         Q.pop();
         // this implies we have pushed the node into Q;
         count++;
         for(auto it : adj[node])
         {
             // we dec the indegree after it comes out
             indegree[it]--;
             if(indegree[it]==0)
             {
                 Q.push(it);
             }
             
             
         }
     }
     
     // if v==count then the cycle => topological soritng exist thus no cycle
     return V==count?false:true;
     
      
*/


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends