class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        
        //차이가 최소가 되는 부분집합 만들기 위해 정렬
        sort(nums.begin(), nums.end());
        
        int maxNum = nums[0];
        int minNum = nums[0];
        
        int answer = 1;
        
        for(auto n : nums) {
            maxNum = max(maxNum, n);
            minNum = min(minNum, n);
            
            //새로운 부분집합이 필요한 상황 : 부분집합 최대 - 최소 > k !!!
            if(maxNum - minNum > k) {
                answer++;
                
                //새로운 부분집합 이니까 다시 세팅 
                maxNum = n;
                minNum = n;
            }
        }
        
        return answer;
        
    }
};