class Solution {
public:
    int maxAbsoluteSum(vector<int>& a) {
        int n=a.size();
        int bestending=a[0];
        int worstending=a[0];
       int best=a[0];
       int wrost=a[0];
        for(int i=1;i<n;i++){
            int v1=a[i];
            int v2=bestending+a[i];
            bestending=max(v1,v2);
            best=max(bestending,best);
           int v3=a[i];
           int v4=worstending+a[i];
            worstending = min(v3, v4);
            wrost=min(wrost,worstending);
        }
      
        
       return max(best,abs(wrost));
    }
};