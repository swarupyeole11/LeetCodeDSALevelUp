class Solution {
    int x[4]={-1,0,1,0};
    int y[4]={0,1,0,-1};
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
        int m=matrix.size();
        if(m==0) return {};
        int n=matrix[0].size();
        vector<vector<int> > dis(m,vector<int>(n,-1));
        queue<pair<int,int> > que;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    que.push({i,j});
                    dis[i][j]=0;
                }
            }
        }
        while(!que.empty()){
            pair<int,int> point=que.front();
            que.pop();
            for(int dir=0;dir<4;dir++){
                int xd=point.first+x[dir];
                int yd=point.second+y[dir];
                if(xd>=0 && yd>=0 && xd<=m-1 && yd<=n-1 && matrix[xd][yd]==1 && dis[xd][yd]==-1){
                    dis[xd][yd]=dis[point.first][point.second]+1;
                    que.push({xd,yd});
                }
            }
        }
        return dis;
    }
};






// class Solution {
    
//     private:
        
//      int bfs(int row , int col , vector<vector<int>>& mat,vector<vector<int>>& vis)
//     {
         
//         int n = mat.size();
//         int m = mat[0].size();
         
//         queue<pair<pair<int,int>,int>> Q;
//         Q.push({{row,col},0});
//         int rowarr[]= {1,-1,0,0};
//         int colarr[]= {0,0,1,-1};
//         int dmax=0;//distance for first 0;
//         while(!Q.empty())
//         {
//             int row = Q.front().first.first;
//             int col = Q.front().first.second;
//             int d = Q.front().second;
            
//             if(mat[row][col]==0)
//             {
//                 dmax=d;
//                 return dmax;
//             }
            
//             Q.pop();
            
//             for(int i=0; i<4; i++)
//             {
//                 int nrow = row + rowarr[i];
//                 int ncol = col + colarr[i];
//                 if(nrow>=0 && ncol>=0 && nrow<n && ncol<m && !vis[nrow][ncol] && mat[row][col]!=0)
//                 {
//                     Q.push({{nrow,ncol},d+1});
//                     vis[nrow][ncol]=1;
//                 }
//             }
            
//         }
        
//          return dmax;
//     }
    
// public:
    
//     vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
//        vector<vector<int>> ans;
//         int n = mat.size();
//         int m = mat[0].size();
        
//         for(int i=0;i<n;i++)
//         {
//             vector<int> minians;
//             for(int j=0;j<m;j++)
//             {
//                 vector<vector<int>> vis(n,vector<int>(m,0));
//                 int answer = bfs(i,j,mat,vis);
//                 minians.push_back(answer);
//             }
            
//             ans.push_back(minians);
//         }
        
        
//         return ans;
//     }
// };