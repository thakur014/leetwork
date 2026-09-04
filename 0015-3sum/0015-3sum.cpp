class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        int n=a.size();
        sort(a.begin(),a.end());
        vector<vector<int>>ans;
        for(int i=0;i<n-2;i++){
            if(i>0 and a[i]==a[i-1]){
                continue;
            }
            int left=i+1;
            int right=n-1;
            int target=-a[i];
            while(left<right){
                int sum=a[left]+a[right];
                if(sum==target){
                   ans.push_back({a[i], a[left], a[right]});
                    left++;
                    right--;
                      while (left < right && a[left] == a[left - 1])
                    left++;

               
                while (left < right && a[right] == a[right + 1])
                    right--;
                }
                else if(sum<target){
                    left++;
                    
                }
                else{
                    right--;
                }
            }
        }
        return ans;
    }  
    
};