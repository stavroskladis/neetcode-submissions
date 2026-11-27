class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n = len(nums)
        result = [1] * n

        left = 1
        for i in range(n):              # left -> right
            result[i] = left            # product of everything left of i
            left *= nums[i]

        right = 1
        for i in range(n - 1, -1, -1):  # right -> left
            result[i] *= right          # times product of everything right of i
            right *= nums[i]

        return result