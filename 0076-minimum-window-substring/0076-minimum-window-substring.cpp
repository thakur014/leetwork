class Solution {
public:
    string minWindow(string s, string t) {

        int low = 0;
        int high = 0;
        int n = s.size();

        int ans = INT_MAX;
        int start = 0;

        unordered_map<char, int> freq;

        for (char ch : t) {
            freq[ch]++;
        }

        int count = t.size();

        for (high = 0; high < n; high++) {

            if (freq[s[high]] > 0) {
                count--;
            }

            freq[s[high]]--;

            while (count == 0) {

                int len = high - low + 1;

                if (len < ans) {
                    ans = len;
                    start = low;
                }

                freq[s[low]]++;

                if (freq[s[low]] > 0) {
                    count++;
                }

                low++;
            }
        }

        if (ans == INT_MAX) {
            return "";
        }

        return s.substr(start, ans);
    }
};