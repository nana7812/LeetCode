class Solution {
public:
    int roman(char c){
        if(c == 'I'){
            return 1;
        }else if(c == 'V'){
            return 5;
        }else if(c == 'X'){
            return 10;
        }else if(c == 'L'){
            return 50;
        }else if(c== 'C'){
            return 100;
        }else if(c == 'D'){
            return 500;
        }else if(c == 'M'){
            return 1000;
        }else{
            return 0;
        }
    }
    
    
    int romanToInt(string s) {
        int ans = 0;
        for(int i = 0; i < s.length()-1; i++){
            if(roman(s[i]) >= roman(s[i+1])){
                ans += roman(s[i]);
            }else{
                ans -= roman(s[i]);
            }
        }
        ans += roman(s[s.length()-1]);
        return ans;
    }
};