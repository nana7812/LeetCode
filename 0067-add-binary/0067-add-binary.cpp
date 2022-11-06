class Solution {
public:
    string addBinary(string a, string b) {
        int aLen = a.length()-1;
        int bLen = b.length() -1;
        
        string ans = "";
        int plus = 0;
        while(aLen >= 0 || bLen >= 0){
            if(aLen >= 0){
                plus += (a[aLen]- '0'); 
            }
            if(bLen >= 0){
                plus += (b[bLen] -'0'); 
            }
            
             if(plus >= 2){
                 plus -=2;
                 ans += (plus +'0');
                 plus = 1;
             }else{
                 ans += (plus +'0');
                 plus = 0;
             }
            aLen--;
            bLen--;
        }
        
        if(plus != 0){
            ans += '1';
        }
       
        reverse(ans.begin(),ans.end());
         return ans;
    }
};