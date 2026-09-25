class Solution {
public:
    int findDuplicate(vector<int>& a) {
        int n = a.size();

        sort(a.begin(), a.end());

        int i = 0;
        int j = 1;

        while(j < n) {
            if(a[i] == a[j]) {
                return a[i];
            }
            else {
                i++;
                j++;
            }
        }

        return -1;
    }
};