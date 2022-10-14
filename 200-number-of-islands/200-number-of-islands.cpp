class Solution {
    
private :
      
    void bfs(int row , int col, vector<vector<char>>& grid,vector<vector<int>> &vis )
    {
        int n=grid.size();
        int m=grid[0].size();
        vis[row][col]=1;
        queue<pair<int,int>> Q;
        Q.push({row,col});
        
        int rows[4] = {0,0,-1,1};
        int cols[4] = {-1,1,0,0};
        
        while(!Q.empty())
        {
            int row = Q.front().first;
            int col = Q.front().second;
            Q.pop();
            //pushing all the adjacent elements of the current node to the queue if they are not visited or are not water nodes and marking them as visited once pushed 
            
            for(int i=0;i<4;i++)
            {
                     int nrow = row+rows[i];
                     int ncol = col+cols[i];
                     if(nrow>=0 && nrow<n && ncol>=0 && ncol<m 
                        && grid[row][col]=='1'&& !vis[nrow][ncol])
                     {
                         vis[nrow][ncol]=1;
                         Q.push({nrow,ncol});
                     }
                
            }
            
        }
    }
    
public:
    int numIslands(vector<vector<char>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                  if(grid[i][j]=='1' && !vis[i][j])
                  {
                      cnt++;
                      bfs(i,j,grid,vis);
                  }
            }
        }
        
        return cnt;
        
    }
};