class Solution:
    def maxSubarraySumCircular(self, nums: List[int]) -> int:
        total = 0
        cur_max, best_max = 0, float("-inf")
        cur_min, best_min = 0, float("inf")

        for x in nums:
            cur_max = max(x, cur_max + x)
            best_max = max(best_max, cur_max)

            cur_min = min(x, cur_min + x)
            best_min = min(best_min, cur_min)

            total += x
        
        if best_max < 0:
            return best_max

        return max(best_max, total - best_min)
        