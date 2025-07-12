class Solution:
    def totalElements(self, arr):
        # Code here
        left = 0
        count = {}
        max_len = 0

        for right in range(len(arr)):
            count[arr[right]] = count.get(arr[right], 0) + 1

            # If more than 2 distinct integers, move the left pointer
            while len(count) > 2:
                count[arr[left]] -= 1
                if count[arr[left]] == 0:
                    del count[arr[left]]
                left += 1

            max_len = max(max_len, right - left + 1)

        return max_len