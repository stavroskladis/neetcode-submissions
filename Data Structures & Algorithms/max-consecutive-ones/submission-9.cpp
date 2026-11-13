class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        if (nums.size() < 1) {
            return 0;
        }

        size_t max_ones = 0;
        size_t ones_counter = 0;
        size_t n = nums.size();

        for (size_t i = 0; i < n; ++i) {
            if (nums[i] == 0) {
                max_ones = max(max_ones, ones_counter);
                ones_counter = 0;
            } else {
                ++ones_counter;
            }

        }

        return static_cast<int>(max(max_ones, ones_counter));
    }
};