class Solution {
public:
    vector<int> sortedSquares(vector<int>& a) {

        int siz = a.size();

        vector<int> neg;
        vector<int> pos;

        
        for(int k = 0; k < siz; k++) {
            if(a[k] < 0) {
                neg.push_back(a[k]);
            }
            else {
                pos.push_back(a[k]);
            }
        }

        
        if(neg.size() == 0) {
            for(int k = 0; k < pos.size(); k++) {
                pos[k] = pos[k] * pos[k];
            }
            return pos;
        }

     
        if(pos.size() == 0) {
            for(int k = 0; k < neg.size(); k++) {
                neg[k] = neg[k] * neg[k];
            }

            reverse(neg.begin(), neg.end());

            return neg;
        }

        int n = neg.size();
        int m = pos.size();

        for(int k = 0; k < n; k++) {
            neg[k] = neg[k] * neg[k];
        }

       
        reverse(neg.begin(), neg.end());

       
        for(int k = 0; k < m; k++) {
            pos[k] = pos[k] * pos[k];
        }

       
        int i = 0;
        int j = 0;
        int id = 0;

        vector<int> res(n + m);

        while(i < n && j < m) {

            if(neg[i] <= pos[j]) {
                res[id] = neg[i];
                i++;
                id++;
            }
            else {
                res[id] = pos[j];
                j++;
                id++;
            }

            
        }

        while(i < n) {
            res[id] = neg[i];
            i++;
            id++;
        }

        while(j < m) {
            res[id] = pos[j];
            j++;
            id++;
        }

        return res;
    }
};