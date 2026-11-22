class Solution {
public:
    bool isPalindrome(string s) {
        int L = 0, R = s.size() - 1;

        while (L < R) {

            if (!std::isalnum(s[L])) {
                ++L;
                continue;
            }

            if (!std::isalnum(s[R])) {
                --R;
                continue;
            }


            if (std::toupper(s[L]) != std::toupper(s[R])) {
                return false;
            }

            ++L;
            --R;
        }

        return true;
    }
};
