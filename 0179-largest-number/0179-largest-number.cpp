class Solution {

public:
   
   static bool cmp(string a, string b){
        return a+b > b+a;
    }
    
    vector<string> sNums;
    string largestNumber(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            sNums.push_back(to_string(nums[i]));
        }
        
        sort(sNums.begin(),sNums.end(),cmp);
        string ans;
        
        bool flag = false; 
        for(int i = 0; i < sNums.size(); i++){
            if(sNums[i] != "0"){
                flag = true;
            } 
            ans += sNums[i];
        }
        if(!flag) return "0";
        return ans;
    }
};