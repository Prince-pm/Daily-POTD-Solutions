class Solution:
    def countAtMostK(self, arr, k):
        # Code here
        from collections import defaultdict
        
        left = 0
        freq = defaultdict(int)
        count = 0

        for right in range(len(arr)):
            freq[arr[right]] += 1

            while len(freq) > k:
                freq[arr[left]] -= 1
                if freq[arr[left]] == 0:
                    del freq[arr[left]]
                left += 1

            count += right - left + 1

        return count