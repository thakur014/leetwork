class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
          int n = arr.size();
          int off=0;
          int cm=1;
          int unique=1;
          while(cm<n){
            if(arr[cm]==arr[cm-1]){
                cm++;
                continue;
            }
            arr[off+1]=arr[cm];
            off++;
            unique++;
            cm++;
          }
          return unique;

        
    }
};