class Solution:
    def maxGold(self, mat):
        # code here
        n = len(mat)        # number of rows
        m = len(mat[0])     # number of columns

        # Traverse from second last column to first
        for j in range(m - 2, -1, -1):
            for i in range(n):
                # Three options: right, right-up, right-down
                right = mat[i][j + 1] if j + 1 < m else 0
                right_up = mat[i - 1][j + 1] if i > 0 and j + 1 < m else 0
                right_down = mat[i + 1][j + 1] if i < n - 1 and j + 1 < m else 0

                # Update current cell with max possible gold from next step
                mat[i][j] += max(right, right_up, right_down)

        # Maximum gold will be the max value in first column
        max_gold = max(mat[i][0] for i in range(n))
        return max_gold