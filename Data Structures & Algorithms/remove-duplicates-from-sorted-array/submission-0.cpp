class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int L = 0, R = 1;

        for (int R = 0; R < (int)nums.size(); ++R) {
            if (nums[L] != nums[R]) {
                L += 1;
                nums[L] = nums[R];
            }
        }
        return L+1;
    }
};