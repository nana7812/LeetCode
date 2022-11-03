class Solution {
public:
    string removeDuplicates(string s, int k) {        
        stack<pair<char,int>> st;
        for(int i = 0; i < s.size(); i++){
            if(st.empty() || st.top().first != s[i]){
                st.push({s[i],1});
            }else if(st.top().first == s[i]){
                st.top().second++;
            }
            if(st.top().second == k){
                st.pop();
            }
        }
        
        string ans = "";
        while(!st.empty()){
            while(st.top().second--){
                ans += st.top().first;
                //ans = st.top().first + ans; // Memory Limit Exceeded
            }
            st.pop();
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
