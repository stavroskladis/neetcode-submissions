class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        if (nums.size() < 1) {
            return 0;
        }

        int max_ones = 0;
        int ones_counter = 0;

        for (const auto& num : nums) {
            if (num) {
                ++ones_counter;
            } else {
                ones_counter = 0;
            }

            if (ones_counter > max_ones) {
                max_ones = ones_counter;
            }
        }

        return max_ones;
    }
};