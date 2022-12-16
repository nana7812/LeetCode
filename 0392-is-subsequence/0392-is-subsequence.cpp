class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sLen = s.length();
        int tLen = t.length();
        
        if(sLen == 0) return true;    
    
        int i = 0; int j = 0;
        while(i < sLen && j < tLen){
            if(s[i] == t[j]){
                i++;
            }
            j++;
            if(i == sLen) return true;
        }
        return false;
    }
};