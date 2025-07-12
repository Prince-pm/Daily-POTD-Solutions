class Solution():
    def maxMinHeight(self, arr, k, w):
        n = len(arr)

        def canAchieve(h):
            ops = 0
            water = [0] * (n + 1)  # difference array
            curr = 0

            for i in range(n):
                curr += water[i]
                actual_height = arr[i] + curr
                if actual_height < h:
                    delta = h - actual_height
                    ops += delta
                    if ops > k:
                        return False
                    curr += delta
                    if i + w < len(water):
                        water[i + w] -= delta
            return True

        low, high = min(arr), min(arr) + k
        answer = low

        while low <= high:
            mid = (low + high) // 2
            if canAchieve(mid):
                answer = mid
                low = mid + 1
            else:
                high = mid - 1

        return answer
