class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        total = 0
        prefix = []

        # O(m x n)
        for i in range(len(nums)):
            total += nums[i]
            prefix.append(total)

        # O(1)
        for i in range(len(nums)):
            leftSum = prefix[i-1] if i > 0 else 0 
            rightSum = total - prefix[i]

            if leftSum == rightSum:
                return i

        return -1
        