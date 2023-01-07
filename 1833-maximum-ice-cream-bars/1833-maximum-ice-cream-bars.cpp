class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        
        int ans = costs.size();
        for(int i = 0; i < costs.size(); i++){
            if(coins >= costs[i]){
                coins -= costs[i];
            }else{
                ans = i;
                break;
            }
        }
        
        return ans;        
    }
};