class Solution:
    def maxSum(self, arr):
        # code here
        n = len(arr)
        stack = []
        max_score = 0

        for i in range(n):
            # While the current element is smaller than top of stack,
            # that means we found a second min for the previous min
            while stack and arr[stack[-1]] > arr[i]:
                idx = stack.pop()
                # arr[idx] is the smallest, arr[i] is the second smallest
                max_score = max(max_score, arr[idx] + arr[i])
            if stack:
                # arr[stack[-1]] is smaller or equal to arr[i]
                max_score = max(max_score, arr[stack[-1]] + arr[i])
            stack.append(i)
        
        return max_score
        
    
