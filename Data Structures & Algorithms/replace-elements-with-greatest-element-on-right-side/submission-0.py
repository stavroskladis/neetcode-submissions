class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        if len(arr) < 1:
            return []
        
        for i in range(len(arr) - 1):
            j = i + 1
            max_num = arr[j] 
            while j < len(arr):
                if arr[j] > max_num:
                    max_num = arr[j]
                j += 1
            
            arr[i] = max_num

        arr[len(arr) - 1] = -1

        return arr