class Solution:
    def substrCount(self, s, k):
        # code here
        if k > len(s):
            return 0

        count = 0
        freq = {}
        left = 0

        for right in range(len(s)):
            # Add current character to freq map
            freq[s[right]] = freq.get(s[right], 0) + 1

            # Maintain window size of k
            if right - left + 1 > k:
                freq[s[left]] -= 1
                if freq[s[left]] == 0:
                    del freq[s[left]]
                left += 1

            # When window is of size k, check if it has exactly k-1 distinct chars
            if right - left + 1 == k:
                if len(freq) == k - 1:
                    count += 1

        return count