class Solution {
public:
    int characterReplacement(string s, int k) {
        std::unordered_map<char, int> counts;
        int L = 0, length = 0, max_freq = 0;

        for (int R = 0; R < s.size(); ++R) {

            counts[s[R]] += 1;
            max_freq = max(max_freq, counts[s[R]]);

            if (R - L + 1 - max_freq > k) {
                counts[s[L]] -= 1; 
                ++L;
            }

            length = max(length, R - L + 1);
        }

        return length;
    }
};
