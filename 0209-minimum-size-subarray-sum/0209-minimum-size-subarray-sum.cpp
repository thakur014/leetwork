class Solution {
public:
    int minSubArrayLen(int target, vector<int>& a) {
        int low=0;
        int high=0;
        int n=a.size();
        int sum=0;
        int res=INT_MAX;
        while(high<n){
            sum=sum+a[high];
            while(sum>=target){
                int len=high-low+1;
                res=min(res,len);
                sum=sum-a[low];
                low++;
            }
            high++;}
            if(res==INT_MAX){
                return 0;}
                return res;
            }

            
    
    
    
};