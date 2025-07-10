class Solution { 
public:
    int maxFreeTime(int totalTime, vector<int>& starts, vector<int>& ends) {
        int n = starts.size();
        vector<int> idleSlots = calculateIdleTimes(totalTime, starts, ends);
        vector<int> leftMax(n + 1, 0);
        vector<int> rightMax(n + 1, 0);
        int maxTotal = 0;

        // Compute max idle time from the left
        leftMax[0] = idleSlots[0];
        for (int i = 1; i <= n; ++i) {
            leftMax[i] = max(leftMax[i - 1], idleSlots[i]);
        }

        // Compute max idle time from the right
        rightMax[n] = idleSlots[n];
        for (int i = n - 1; i >= 0; --i) {
            rightMax[i] = max(rightMax[i + 1], idleSlots[i]);
        }

        for (int i = 0; i < n; ++i) {
            int duration = ends[i] - starts[i];
            int mergeGap = idleSlots[i] + idleSlots[i + 1];

            int maxOutside = max(
                (i > 0) ? leftMax[i - 1] : 0,
                (i + 2 <= n) ? rightMax[i + 2] : 0
            );

            if (duration <= maxOutside) {
                mergeGap += duration;
            }

            maxTotal = max(maxTotal, mergeGap);
        }

        return maxTotal;
    }

private:
    vector<int> calculateIdleTimes(int fullTime, const vector<int>& starts,
                                   const vector<int>& ends) {
        vector<int> idle;
        idle.push_back(starts[0]);  // Time before first meeting

        for (size_t i = 1; i < starts.size(); ++i) {
            idle.push_back(starts[i] - ends[i - 1]);  // Between meetings
        }

        idle.push_back(fullTime - ends.back());  // Time after last meeting
        return idle;
    }
};