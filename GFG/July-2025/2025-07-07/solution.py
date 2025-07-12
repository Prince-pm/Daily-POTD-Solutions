class Solution:
    def nextLargerElement(self, arr):
        # code here
        n = len(arr)
        res = [-1] * n  # Result array with default -1
        stack = []

        # Traverse the array twice to simulate circular array
        for i in range(2 * n - 1, -1, -1):
            while stack and stack[-1] <= arr[i % n]:
                stack.pop()
            if i < n:
                if stack:
                    res[i] = stack[-1]
            stack.append(arr[i % n])
        
        return res