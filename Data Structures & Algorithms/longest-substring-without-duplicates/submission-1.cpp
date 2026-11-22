class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::unordered_set<int> window = {};
        int L = 0, length = 0;

        for (int R = 0; R < s.length(); ++R) {

            while (window.contains(s[R])) {
                window.erase(s[L]);
                ++L;
            }

            length = max(length, R - L + 1);

            window.insert(s[R]);
        }

        return length;
    }
};
