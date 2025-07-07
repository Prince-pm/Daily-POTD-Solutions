from collections import Counter

class Solution:
    def findGreater(self, arr):
        # code here
        n = len(arr)
        res = [-1] * n
        freq = Counter(arr)
        stack = []

        # Traverse from right to left
        for i in range(n - 1, -1, -1):
            # Pop elements with frequency <= current
            while stack and freq[stack[-1]] <= freq[arr[i]]:
                stack.pop()

            if stack:
                res[i] = stack[-1]

            stack.append(arr[i])

        return res