class Solution():
    def longestString(self, arr):
        # code here
        word_set = set(arr)
        longest = ""

        for word in arr:
            is_valid = True
            for i in range(1, len(word)):
                if word[:i] not in word_set:
                    is_valid = False
                    break
            if is_valid:
                if len(word) > len(longest) or (len(word) == len(longest) and word < longest):
                    longest = word

        return longest