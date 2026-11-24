class Solution {
public:
    int maxArea(vector<int>& heights) {
        int L = 0, R = heights.size() - 1;
        int max_area = 0;

        while (L < R) {
            max_area = max(max_area, (R - L) * min(heights[L], heights[R]));

            if (heights[L] < heights[R]) {
                ++L;
            }
            else if (heights[L] > heights[R]) {
                --R;
            }
            else {
                --R;
            }
        }

        return max_area;
    }
};
