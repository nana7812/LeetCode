class Solution {
public:
    int dx[4] = {-1,1,0,0};
    int dy[4] = {0,0,-1,1};
    
    int N,M;
    queue<pair<pair<int,int>,int>> q;
    void setZeroes(vector<vector<int>>& matrix) {
        N = matrix.size();
        M = matrix[0].size();
        bool c[200][200][4] = {false,};
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                if(matrix[i][j] == 0){
                    for(int d = 0; d< 4; d++){
                        q.push({{i,j},d});
                        c[i][j][d] = true;
                    }
                }
            }
        }
        
        while(!q.empty()){
            int qx = q.front().first.first;
            int qy = q.front().first.second;
            int qd = q.front().second;
            q.pop();
            while(0<=qx + dx[qd] && qx + dx[qd] < N && 0<= qy + dy[qd] && qy + dy[qd] < M && c[qx + dx[qd]][qy + dy[qd]][qd] == false){
                qx += dx[qd];
                qy += dy[qd];
                c[qx][qy][qd] = true;
                matrix[qx][qy] = 0;
            }
        }
    }
};