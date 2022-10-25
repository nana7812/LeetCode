class Solution {
public:
    bool isPalindrome(int x) {
        string sNum = to_string(x);
        for(int i = 0; i < sNum.length()/2; i++){
            if(sNum[i] != sNum[sNum.length()-1 -i]){
                return false;
            }
        }
        
        return true;
    }
};