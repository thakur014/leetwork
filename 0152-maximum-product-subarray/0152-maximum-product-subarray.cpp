class Solution {
public:
    int maxProduct(vector<int>& a) {
        int n=a.size();
        int minending=a[0];
        int maxending=a[0];
        int ans=a[0];
        for(int i=1;i<n;i++){
            int v1=a[i];
            int v2=a[i]*minending;
            int v3=a[i]*maxending;
            maxending=max(v1,max(v2,v3));
            minending=min(v1,min(v2,v3));
            ans=max(ans,max(minending,maxending));

        }
        return ans;
    }
};