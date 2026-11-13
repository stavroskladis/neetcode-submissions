class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        if (nums.size() < 1) {
            return 0;
        }

        size_t max_ones = 0;
        size_t ones_counter = 0;
        size_t n = nums.size();

        for (const auto& num : nums) {
            ones_counter = num ? ++ones_counter : 0;
            max_ones = max(max_ones, ones_counter);
        }

        return static_cast<int>(max_ones);
    }
};