class Solution {
public:
    int threeSumClosest(vector<int>& a, int target) {
        
        int n=a.size();
        sort(a.begin(),a.end());
        int ans=a[0]+a[1]+a[2];
        for(int i=0;i<n-2;i++){
            int left=i+1;
            int right=n-1;
            while(left<right){
                int sum=a[i]+a[left]+a[right];
                if(abs(sum-target)<abs(ans-target)){
                ans=sum;
            }
            if(sum==target){
                ans=sum;
                break;
            }
            else if(sum<target){
                left++;
            
        }
        else{
            right--;
        }
        }}
        return ans;
    }
    
};