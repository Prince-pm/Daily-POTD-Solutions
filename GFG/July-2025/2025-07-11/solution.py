class Solution:
    def countConsec(self, n: int) -> int:
        # code here 
        if n < 2:
            return 0
        
        a = 1  # strings of length 1 ending in 0
        b = 1  # strings of length 1 ending in 1
        
        for i in range(2, n + 1):
            new_a = a + b
            new_b = a
            a, b = new_a, new_b
        
        countValid = a + b
        total = 1 << n  # 2^n
        return total - countValid