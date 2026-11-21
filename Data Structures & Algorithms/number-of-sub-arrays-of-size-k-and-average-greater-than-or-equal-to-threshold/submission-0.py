class Solution:
    def numOfSubarrays(self, arr: List[int], k: int, threshold: int) -> int:
        L = 0
        window_sum = 0.0
        cnt = 0

        for R in range(len(arr)):
            window_sum += arr[R]

            if R - L  + 1 > k:
                window_sum -= arr[L]
                L += 1

            if R - L + 1 == k:
                if window_sum / k >= threshold:
                    cnt += 1

        return cnt