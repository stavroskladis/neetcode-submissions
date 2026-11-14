class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        if len(arr) < 1:
            return []
        
        length = len(arr)

        max_num = arr[length - 1]
        for i in range(length - 2, -1, -1):
            tmp = arr[i]
            arr[i] = max_num
            max_num = max(tmp, max_num)
            
        arr[len(arr) - 1] = -1

        return arr