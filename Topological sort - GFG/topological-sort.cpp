//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    
    private : 
    
    void dfs(int node, vector<int> adj[], vector<int> &vis , stack<int> &st)
    {
        vis[node] = 1;
        for(auto it : adj[node])
        {
            if(!vis[it])
            {
                // vis[it]=1;
                dfs(it,adj,vis,st);
                
            }
            
        }
        //jab koi nai bacha traverse karno ko toh usko push kr diya
        st.push(node);
        
     
    }
    
    
    void bfs_kahn( vector<int> adj[], vector<int> &ans, int V)
    {
      // when your node starts from 0 always declare the array as of V size and when the graph starts from 1 declare itof size 1 because the array is 0 indexed
       vector<int> indegree(V,0);
       queue<int> Q;
       
       for(int i=0; i<V; i++)
       {
           for(auto it : adj[i])
           {
               indegree[it]++;
           }
       }
       
       
        /* just to check whether indegrees were printed correctly */
    //   for(auto it : indegree)
    //   {
    //       cout<<it<<" ";
    //   }
       
       for(int i=0; i<V; i++)
       {
           if(indegree[i]==0)
           {
               Q.push(i);
           }
       }
       
       while(!Q.empty())
       {
           int node = Q.front();
           Q.pop();
           ans.push_back(node);
           for(auto it : adj[node])
           {
               indegree[it]--;
               if(indegree[it]==0)
                 Q.push(it);
           }
           
           
       }
        
    }
    
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    
	  // for dfs algorithm 
	    vector<int> ans;
	    vector<int> vis(V,0);
	    stack<int> st;
	    
	    for(int i=0; i<V; i++)
	    {
	        if(!vis[i])
	        {
	            dfs(i,adj,vis,st);
	        }
	    }
	    
	    while(!st.empty())
	    {
	        int x = st.top();
	        st.pop();
	        ans.push_back(x);
	    }
	    
	    
	  // for bfs algorithm 
	  
/*	  vector<int> ans;
	  bfs_kahn(adj,ans,V);
*/	  
	  
	
	  return ans;
	    
	}
};

//{ Driver Code Starts.

/*  Function to check if elements returned by user
*   contains the elements in topological sorted form
*   V: number of vertices
*   *res: array containing elements in topological sorted form
*   adj[]: graph input
*/
int check(int V, vector <int> &res, vector<int> adj[]) {
    
    if(V!=res.size())
    return 0;
    
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }
        
        Solution obj;
        vector <int> res = obj.topoSort(N, adj);

        cout << check(N, res, adj) << endl;
    }
    
    return 0;
}
// } Driver Code Ends