class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> ss;
        unordered_map<char,char> tt;
        
       
        for(int i = 0; i < s.size(); i++){
            if(ss[s[i]] && ss[s[i]] != t[i]){
                return false;
            }
            if(tt[t[i]] && tt[t[i]] != s[i]){
                return false;
            }
            ss[s[i]] = t[i];
            tt[t[i]] = s[i];
        }
        
        return true;
    }
};