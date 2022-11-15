class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        map<int,long long> m;
        for(int i = 0; i <=30; i++){
           m[i] = 0;
        }
        for(int i = 0; i < time.size(); i++){
            m[time[i]%60]++;
         }
        long long ans = 0;
        for(int i = 0; i <=30; i++){
           if(m[i] == 0) continue;
           long long num = 0;
           if(i == 0 || i == 30){
               num = (m[i] * (m[i]-1))/2;
           }else{
               num = m[i] * m[60-i];
           }
            
            ans += num;
        }  
        return ans;
    }
};