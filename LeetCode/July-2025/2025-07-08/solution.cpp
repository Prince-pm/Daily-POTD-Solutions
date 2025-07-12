class Solution {
public:
    int maxValue(vector<vector<int>>& events, int k) {
        // Step 1: Sort by endDay to apply binary search
        sort(events.begin(), events.end(), [](auto& a, auto& b) {
            return a[1] < b[1];
        });

        int n = events.size();
        vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));

        for (int i = 0; i < n; ++i) {
            int start = events[i][0], value = events[i][2];
            int h = binarySearch(events, start, i); // last non-overlapping event

            for (int j = 1; j <= k; ++j) {
                // Either take this event or skip
                dp[i + 1][j] = max(dp[i][j], dp[h][j - 1] + value);
            }
        }

        return dp[n][k];
    }

private:
    // Find last event ending before 'x' using binary search
    int binarySearch(vector<vector<int>>& events, int x, int rightBound) {
        int left = 0, right = rightBound;
        while (left < right) {
            int mid = (left + right) / 2;
            if (events[mid][1] >= x)
                right = mid;
            else
                left = mid + 1;
        }
        return left;
    }
};