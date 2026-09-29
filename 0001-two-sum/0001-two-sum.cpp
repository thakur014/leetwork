class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        vector<pair<int,int>> v;

        for(int i = 0; i < a.size(); i++)
            v.push_back({a[i], i});

        sort(v.begin(), v.end());

        int i = 0, j = v.size() - 1;

        while(i < j) {
            int sum = v[i].first + v[j].first;

            if(sum == target)
                return {v[i].second, v[j].second};

            else if(sum > target)
                j--;

            else
                i++;
        }

        return {};
    }
};