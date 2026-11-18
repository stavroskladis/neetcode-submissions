class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int curSum = 0;

        for (int n : nums) {
            curSum = curSum < 0 ? n : curSum + n;
            maxSum = max(maxSum, curSum);
        }

        return maxSum;
    }
};
