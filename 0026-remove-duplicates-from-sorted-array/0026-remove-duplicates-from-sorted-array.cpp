class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
          int n = arr.size();
          int a=0;
          int b=1;
          int res=1;
          while(b<n){
            if(arr[b]==arr[b-1]){
                b++;
                continue;
            }
            arr[a+1]=arr[b];
            a++;
            res++;
            b++;
          }
          return res;

        
    }
};