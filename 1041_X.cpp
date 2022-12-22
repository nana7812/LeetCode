class Solution {
public:
    /* 중도포기
    int dx[4] = {0,1,0,-1};
    int dy[4] = {1,0,-1,0};
    
    bool isRobotBounded(string instructions) {
        int dir = 0;
        int x = 0;
        int y = 0;
        for(int i = 0; i < instructions.size(); i++){
            if(instructions[i] == 'G'){
                x += dx[dir]; 
                y += dy[dir];
                if(x == 0 && y == 0) return true;
            }else if(instructions[i] == 'L'){
                dir = (dir+ 3)%4;
            }else{
                dir = (dir +1)%4; 
            }
            
            }
            
        }
       
        
        return false;
    }
    */
};