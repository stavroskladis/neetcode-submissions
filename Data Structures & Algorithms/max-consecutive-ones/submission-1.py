class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        if len(nums) < 1:
            return 0
        
        max_ones = 0
        ones_counter = 0
        for i in range(len(nums)):
            if nums[i] == 1:
                ones_counter += 1
            else:
                ones_counter = 0

            if ones_counter > max_ones:
                max_ones += 1
        
        return max_ones