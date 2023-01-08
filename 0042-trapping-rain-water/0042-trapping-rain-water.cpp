class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> lMax(height.size());
        vector<int> rMax(height.size());

        int mL = 0;
        for(int i = 0;i<lMax.size();i++){
            mL=max(height[i], mL);
            lMax[i] = mL;
        }
        mL = 0;
        for(int i = lMax.size()-1;i>-1;i--){
            mL=max(height[i], mL);
            rMax[i] = mL;
        }
        
        int ans = 0;
        for(int i = 0;i<height.size();i++){
            ans += min(lMax[i],rMax[i])-height[i];
        }
        return ans;
        
        /*시간 초과
        int w = height.size(); 
        
        for(int i = 1; i < w-1; i++){ //블록 사이에 물 고임
            int left = 0; int right = 0;
            for(int j = i-1; j>=0; j--){
                left = max(left, height[j]);
            }
            for(int j = i+1; j < w; j++){
                right = max(right, height[j]);
            }
            
            int rain = min(left,right) - height[i];
            ans += max(0,rain); //[0,0,2,0];
        }
        */
    }
};