class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_ones = 0, ones_counter = 0;

        for (int num : nums) {
            ones_counter = num ? ++ones_counter : 0;
            max_ones = max(max_ones, ones_counter);
        }

        return max_ones;
    }
};