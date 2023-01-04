class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        vector<int> ans(size,0);
        
        int idx = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                ans[idx] = nums[i];
                idx++;
            }
        }
        nums = ans;
    }
};