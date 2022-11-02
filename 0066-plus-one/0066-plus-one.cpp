class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        digits[digits.size()-1]++;
        for(int i = digits.size()-1; i >= 0; i--){
           
            if(digits[i] == 10){
                digits[i]-=10;
                if(i-1 >= 0){
                    digits[i-1]++;
                }
                
            }else{
                break;
            }
        }
        
        if(digits[0] == 0){
            vector<int> ans;
            ans.push_back(1);
            for(int i = 0; i < digits.size(); i++){
                ans.push_back(digits[i]);
            }
            return ans;
        }
        
       
        return digits;
    }
};