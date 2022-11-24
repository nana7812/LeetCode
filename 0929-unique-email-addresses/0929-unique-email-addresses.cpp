class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_map<string,bool> m;
        int answer = 0;
        for(auto &email : emails){
            string local;
            string domain;
            int idx = email.find('@');
            local = email.substr(0,idx);
            domain = email.substr(idx);
            string nLocal;
            for(auto c : local){
                if(c == '+') break;
                if(c == '.') continue;
                nLocal += c;
            }
            
            if(m[nLocal + domain] == false){
                answer++;
                m[nLocal + domain] = true;
            }
        }
      return answer;  
    }
};