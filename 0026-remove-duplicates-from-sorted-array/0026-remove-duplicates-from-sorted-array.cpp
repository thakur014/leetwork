class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        int n=a.size();
        int i=0;
        int j=1;
        int r=1;
        while(j<n){
            if(a[j]==a[j-1]){
            j++;
            continue;}
            a[i+1]=a[j];
          
            i++;
            j++;
            r++;
        }
        return r;
        
    }
};