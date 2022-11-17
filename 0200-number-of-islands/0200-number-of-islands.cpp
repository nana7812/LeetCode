class Solution {
public:
    int dx[4] = {-1,1,0,0};
    int dy[4] = {0,0,-1,1};
    
    void bfs(int x, int y,vector<vector<char>>& grid,vector<vector<bool>> &c){
        queue<pair<int,int>> q;
        q.push({x,y});
        c[x][y] = true;
        int N = grid.size();
        int M = grid[0].size();
        while(!q.empty()){
            int qx = q.front().first;
            int qy = q.front().second;
            q.pop();
            for(int i = 0; i < 4; i++){
                int nx = qx + dx[i];
                int ny = qy + dy[i];
                if(0 > nx || nx >= N || 0 > ny || 0 >= M ) continue;
                if(c[nx][ny] == true) continue;
                if(grid[nx][ny] == '0') continue;
                q.push({nx,ny}); 
                c[nx][ny] = true;
            }
        }
    }
    
    int ans = 0;
    int numIslands(vector<vector<char>>& grid) {
        vector<vector<bool>> c(grid.size(),vector<bool>(grid[0].size(),false));
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == '1' && c[i][j] == false ){
                    bfs(i,j,grid,c);
                    ans++;
                }
            }
        }
        
        return ans;
    }
};