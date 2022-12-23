#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int N,M;
bool check[501][501][4];
int dx[] = {0,1,0,-1};
int dy[] = {1,0,-1,0};

int bfs(vector<string> grid, int x, int y , int dir){
    queue<pair<pair<int,int>,pair<int,int>>> q;
    q.push({{x,y},{dir,0}});
    while(!q.empty()){
        int qx = q.front().first.first;
        int qy = q.front().first.second;
        int qd = q.front().second.first;
        int qc = q.front().second.second;
        q.pop();
        if(grid[qx][qy] == 'R') qd = (qd+1) % 4;
        else if(grid[qx][qy] == 'L') qd = (qd+3) % 4;
        
        int nx = qx + dx[qd];
        int ny = qy + dy[qd];
        if(nx >= N) nx = 0;
        if(nx < 0) nx = N-1;
        if(ny >= M) ny = 0;
        if(ny < 0) ny = M-1;
        if(nx == x && ny == y && dir == qd) return qc+1;
        
        if(check[nx][ny][qd]) continue;
        q.push({{nx,ny},{qd,qc+1}});
        check[nx][ny][qd] = true;
    }
}

vector<int> solution(vector<string> grid) {
    vector<int> answer;
    N = grid.size(); M = grid[0].size();
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            for(int k = 0; k < 4; k++){
                if(!check[i][j][k]){
                    check[i][j][k] = true;
                    int ans = bfs(grid,i,j,k);
                    answer.push_back(ans);
                }
            }
        }
    }
    
    sort(answer.begin(),answer.end());
    return answer;
}
