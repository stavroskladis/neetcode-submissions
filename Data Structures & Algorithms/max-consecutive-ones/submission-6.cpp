class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        if (nums.size() < 1) {
            return 0;
        }

        size_t max_ones = 0;
        size_t ones_counter = 0;

        for (size_t i = 0; i < nums.size(); ++i) {
            if (nums[i]) {
                ++ones_counter;
            } else {
                ones_counter = 0;
                continue;
            }

            if (ones_counter > max_ones) {
                max_ones = ones_counter;
            }
        }

        return static_cast<int>(max_ones);
    }
};