class Solution {
public:
    long long sum(long long l, long long r){
        return r*(r+1)/2 - (l)*(l-1)/2;
    }
    
    long long minimalKSum(vector<int>& a, int k) {
        sort(a.begin(), a.end()); 
        long long x = 1;
        long long ans = 0;
        for(int i = 0; i<a.size() && 0 < k; i++){
            long long d = a[i] - x;
            
            if(d>0){
                if(d>k){            
                    ans += sum(x, x+k-1);
                    k = 0;
                } else{
                    ans += sum(x, a[i]-1);
                    k = k-d;
                }
            }
            x = a[i]+1;
        }
        
        if(k>0)       // ex2
            ans += sum(a[a.size()-1]+1, a[a.size()-1]+k);
        
        return ans;
    }

};