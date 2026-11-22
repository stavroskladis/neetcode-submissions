class Solution:
    def maxTurbulenceSize(self, arr: List[int]) -> int:
        L, length = 0, 0
        prev_sign = '.'
        sign = ''
        
        if len(arr) == 0:
            return 0
        elif len(arr) == 1:
            return 1

        for R in range(1, len(arr)):

            if arr[R-1] > arr[R]: 
                sign = '>'
            elif arr[R-1] < arr[R]:
                sign = '<'
            else:
                sign = '='

            if sign == '=':
                L = R
            elif prev_sign == sign:
                L = R - 1

            prev_sign = sign

            length = max(length, R - L + 1)

        return length