class Solution {
public:
    int minSubArrayLen(int target, vector<int>& a) {
        int low=0;
        int high=0;
        int n=a.size();
        int sum=0;
        int res=INT_MAX;   //res me min value deni h jo result h pr hme nhi pta min kitna h isliye hmne max le lia fir ye update ho jaega min(res,len) iski vjh se min lengh mil jaegi 
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