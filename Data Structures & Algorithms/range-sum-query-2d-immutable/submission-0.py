class NumMatrix:

    def __init__(self, matrix: List[List[int]]):
        self.n = len(matrix)        # rows
        self.m = len(matrix[0])     # columns
        self.prefix = [[0] * (self.m + 1) for _ in range(self.n + 1)]

        for i in range(self.n):
            for j in range(self.m):
                self.prefix[i+1][j+1] = (self.prefix[i][j+1]     # above
                                         + self.prefix[i+1][j]   # left
                                         - self.prefix[i][j]     # overlap
                                         + matrix[i][j])         # the cell

    def sumRegion(self, row1: int, col1: int, row2: int, col2: int) -> int:
        P = self.prefix
        return (P[row2+1][col2+1]      # whole block (0,0) .. (row2, col2)
                - P[row1][col2+1]      # strip above row1
                - P[row2+1][col1]      # strip left of col1
                + P[row1][col1])       # corner, subtracted twice → add back