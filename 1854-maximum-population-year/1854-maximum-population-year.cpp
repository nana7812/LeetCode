class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        map<int,int> m;
        for(int i =0; i < logs.size(); i++){
            int birth = logs[i][0];
            int death = logs[i][1];
            for(int i = birth; i < death; i++){
                m[i]++;
            }
        }
        
        int year = 0;
        int count = 0;
        for(auto itr = m.begin(); itr != m.end(); itr++){
            if(itr->second > count){
                count = itr->second;
                year = itr->first;
            }

        }
        return year;
    }
};