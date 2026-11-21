class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        float window_sum = 0.0;
        int L = 0, cnt = 0;

        for (int R = 0; R < arr.size(); ++R) {
            window_sum += arr[R];

            if (R - L + 1 > k) {
                window_sum -= arr[L];
                ++L;
            }

            if (R - L + 1 == k) {
                if (window_sum / k >= threshold) {
                    ++cnt;
                }
            }
        }

        return cnt;
    }
};