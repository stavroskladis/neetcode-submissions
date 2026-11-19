class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total = 0;
        int cur_max = 0, best_max = INT_MIN;
        int cur_min = 0, best_min = INT_MAX;

        for (int x : nums) {
            cur_max = max(x, cur_max + x);
            best_max = max(best_max, cur_max);

            cur_min = min(x, cur_min + x);
            best_min = min(best_min, cur_min);

            total += x;
        }

        if (best_max < 0) {
            return best_max;
        }

        // max of kadene max (no wrap / normal case) vs kadene min (wrap)
        return max(best_max, total - best_min);
    }
};