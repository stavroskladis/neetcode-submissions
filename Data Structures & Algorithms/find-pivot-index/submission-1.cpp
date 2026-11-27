class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int size = nums.size();
        vector<int> prefix(size, 0);
        int total = 0;

        for (int i = 0; i < size; ++i) {
            total += nums[i];
            prefix[i] = total;
        }

        for (int i = 0; i < size; ++i) {
            int a = i > 0? prefix[i-1] : 0;
            int b = total - prefix[i];

            if (a==b) {
                return i;
            }
        }

        return -1;
    }
};