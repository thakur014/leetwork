class Solution {
public:
    int maxSubarraySumCircular(vector<int>& a) {
        int n=a.size();
        int bestending=a[0];
        int worstending=a[0];
        int ans=a[0];
        int total=a[0];
        int worst=a[0];
        for(int i=1;i<n;i++){
            int v1=bestending+a[i];
            int v2=a[i];
            bestending=max(v1,v2);
         ans=max(ans,bestending);
         int v3=worstending+a[i];
         int v4=a[i];
            worstending=min(v3,v4);
            worst=min(worst,worstending);
            total+=a[i];
        }
        if(ans<0) return ans;
        
        return max(ans,total-worst);
    }
};