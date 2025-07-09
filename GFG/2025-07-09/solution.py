class Solution:
    def sumSubMins(self, arr):
        # Code here
        MOD = 10**9 + 7
        n = len(arr)
        
        # Previous Less Element (PLE) index
        ple = [-1] * n
        stack = []
        for i in range(n):
            while stack and arr[stack[-1]] > arr[i]:
                stack.pop()
            ple[i] = stack[-1] if stack else -1
            stack.append(i)
        
        # Next Less Element (NLE) index
        nle = [n] * n
        stack = []
        for i in range(n - 1, -1, -1):
            while stack and arr[stack[-1]] >= arr[i]:
                stack.pop()
            nle[i] = stack[-1] if stack else n
            stack.append(i)
        
        # Compute total using contribution of each element
        total = 0
        for i in range(n):
            left = i - ple[i]
            right = nle[i] - i
            total = (total + arr[i] * left * right) % MOD
        
        return total