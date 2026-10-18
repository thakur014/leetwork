class Solution {
public:
    int pivotIndex(vector<int>& a) {
     int n=a.size();
        int sum=0;
        int left=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
        for(int i=0;i<n;i++){
          int right=sum-left-a[i];
            if(left==right){
                return i;}
              left+=a[i];

            }
        
            
                return -1;
            
        }
        
    
};