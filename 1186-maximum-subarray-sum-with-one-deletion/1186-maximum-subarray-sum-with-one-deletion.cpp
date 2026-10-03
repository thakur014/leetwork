class Solution {
public:
    int maximumSum(vector<int>& a) {
        int n = a.size();

        int nodelete = a[0];
        int onedelete = INT_MIN;
        int ans = a[0];

        for (int i = 1; i < n; i++) {

            int prevnodlt = nodelete;

            nodelete = max(a[i], nodelete + a[i]);

            if (onedelete == INT_MIN) {
                onedelete = prevnodlt;
            }
            else {
                onedelete = max(prevnodlt, onedelete + a[i]);
            }

            ans = max(ans, max(nodelete, onedelete));
        }

        return ans;
    }
};