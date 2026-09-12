class Solution {
public:
    int totalFruit(vector<int>& a) {
        int low=0;
        int high=0;
        int res=0;
        int n=a.size();

        unordered_map<int, int> f;
        for(int high=0;high<n;high++){
            f[a[high]]++;
           while(f.size()>2){
    f[a[low]]--;


if(f[a[low]]==0){
    f.erase(a[low]);
    
}
low++;}
            int len=high-low+1;
            res=max(len,res);
        }
        return res;
    }
};