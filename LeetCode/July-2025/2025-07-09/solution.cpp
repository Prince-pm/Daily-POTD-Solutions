class Solution {
public:
    int maxFreeTime(int eventTime, int k, vector<int>& startTime, vector<int>& endTime) {
        int n = startTime.size();
        vector<int> gaps;

        // Gap before first meeting
        gaps.push_back(startTime[0]);

        // Gaps between meetings
        for (int i = 1; i < n; ++i) {
            gaps.push_back(startTime[i] - endTime[i - 1]);
        }

        // Gap after last meeting
        gaps.push_back(eventTime - endTime[n - 1]);

        // Sliding window of size k+1 over the gaps array
        int maxFree = 0, currSum = 0;
        int windowSize = k + 1;

        for (int i = 0; i < gaps.size(); ++i) {
            currSum += gaps[i];
            if (i >= windowSize) {
                currSum -= gaps[i - windowSize];
            }
            if (i >= windowSize - 1) {
                maxFree = max(maxFree, currSum);
            }
        }

        return maxFree;
    }
};