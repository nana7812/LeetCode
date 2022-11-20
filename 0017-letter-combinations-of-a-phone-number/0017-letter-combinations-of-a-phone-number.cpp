class Solution {
public:
     unordered_map<char,string> m{
        {'2', "abc"},
        {'3', "def"},
        {'4', "ghi"},
        {'5', "jkl"},
        {'6', "mno"},
        {'7', "pqrs"},
        {'8', "tuv"},
        {'9', "wxyz"}
    };

        vector<string> ans;
        void dfs(string & digits, int cnt, string s){
            if(cnt == digits.size()){
                ans.push_back(s);
                return;
            }
            
            for(auto c : m[digits[cnt]]){
                dfs(digits,cnt+1,s + c);
            }
         
            
        }
    
    
    vector<string> letterCombinations(string digits) {
        if(digits.size() == 0) return ans;
            dfs(digits,0,"");
        return ans;
    }
};