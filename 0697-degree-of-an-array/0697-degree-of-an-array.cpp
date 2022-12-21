class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        map<int,int> cnt;
        vector<int> v[50000];
        for(int i = 0; i < nums.size(); i++){
            cnt[nums[i]]++;
            v[nums[i]].push_back(i);
        }
        
        int maxCnt = 0; int ans = 0;
        for(auto itr = cnt.begin(); itr != cnt.end(); itr++){
            int num = itr->first;
            int ccnt = itr->second;
            if(ccnt >= maxCnt){
                int len = v[num].size()-1;
                int tempAns = v[num][len] - v[num][0] +1;
                if(ccnt == maxCnt){
                    ans = min(tempAns,ans);
                }else{
                    ans = tempAns;
                }
                maxCnt = ccnt;
            }
        }
        
        return ans;
    }
};