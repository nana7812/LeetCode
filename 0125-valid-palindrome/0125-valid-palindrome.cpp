class Solution {
public:
    bool isPalindrome(string s) {
        bool ans = true;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        string str;
        for(int i = 0; i < s.length(); i++){
            if(isalpha(s[i])|| ('0'<= s[i]&& s[i] <='9')){
                str += s[i];
            }
        }
    
        string str2 = str;
        reverse(str2.begin(),str2.end());
        if(str != str2) ans = false;
        return ans;
    }
};