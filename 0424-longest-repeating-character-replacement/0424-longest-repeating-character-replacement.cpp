class Solution {
public:
    int characterReplacement(string s, int k) {
        int low=0;
        int high=0;
        int n=s.size();
      unordered_map<char, int> f;
       int res=0;
        for(high=0;high<n;high++){
            f[s[high]]++;
            int len=high-low+1;
            int maxcnt=0;
           
            for(auto it: f){
             maxcnt=max(maxcnt, it.second);}
            int diff=len-maxcnt;
            while(diff>k){
                f[s[low]]--;
                low++;
                for(auto it: f){
             maxcnt=max(maxcnt, it.second);}
                len= high-low+1;
                diff=len-maxcnt;
            }
            len =high-low+1;
            res=max(res,len);
            
            
        }
       
         return res;
    }
};