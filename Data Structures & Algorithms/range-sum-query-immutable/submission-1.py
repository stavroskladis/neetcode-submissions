class NumArray:

    def __init__(self, nums: List[int]):
        self.prefix = []
        self.total = 0
        
        # O(n) only once in the initialization
        for n in nums:
            self.total += n
            self.prefix.append(self.total)


    # O(1)
    def sumRange(self, left: int, right: int) -> int:
      preRight = self.prefix[right]
      preLeft  = self.prefix[left-1] if left > 0 else 0
      return (preRight - preLeft)


# Your NumArray object will be instantiated and called as such:
# obj = NumArray(nums)
# param_1 = obj.sumRange(left,right)