class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto itr = find(nums.begin(),nums.end(),target);
        if(itr == nums.end()){
            nums.push_back(target);
            sort(nums.begin(),nums.end());
        }
      
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == target){
                return i;
            }
        }
        
        return 0;
    }
};