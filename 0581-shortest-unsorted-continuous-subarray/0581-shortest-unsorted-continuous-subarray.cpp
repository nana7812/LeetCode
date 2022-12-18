class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> sortArr = nums;
        sort(sortArr.begin(),sortArr.end());
        
        int start = 0;
        for(int i= 0; i < nums.size(); i++){
            start = i;
            if(nums[i] != sortArr[i]){
                break;
            }
        }
      
        if(start == nums.size() - 1) return 0;
        
        int end = 0;
        for(int i= nums.size()-1; i >= 0; i--){
            end = i;
            if(nums[i] != sortArr[i]){
                break;
            }
        }
        
        return end - start +1;
    }
};