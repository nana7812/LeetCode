class Solution {
public:
    int arraySign(vector<int>& nums) {
        
        int negativeCount = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0) return 0;
            
            if(nums[i] < 0){
                negativeCount++;
            }
        }
        
        if(negativeCount % 2 == 0){
            return 1;
        }else{
            return -1;
        }
        
        /*Runtime Error
        int x = 1;
        for(int i =0; i < nums.size(); i++){
            x *= nums[i];
        }
        
        if(x > 0){
            return 1;
        }else if(x == 0){
            return 0;
        }else{
            return -1;
        }
        */

    }
};