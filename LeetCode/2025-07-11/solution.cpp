class Solution {
public:
    int mostBooked(int n, vector<vector<int>>& meetings) {
        sort(meetings.begin(), meetings.end());

        // Min-heap of available room numbers
        priority_queue<int, vector<int>, greater<int>> available;
        for (int i = 0; i < n; ++i)
            available.push(i);

        // Min-heap of {endTime, roomNumber}
        priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<>> inUse;

        vector<int> roomCount(n, 0);

        for (auto& meeting : meetings) {
            long long start = meeting[0], end = meeting[1];

            // Free up rooms that have become available by current meeting start
            while (!inUse.empty() && inUse.top().first <= start) {
                available.push(inUse.top().second);
                inUse.pop();
            }

            if (!available.empty()) {
                int room = available.top();
                available.pop();
                inUse.push({end, room});
                roomCount[room]++;
            } else {
                auto [endTime, room] = inUse.top(); inUse.pop();
                long long duration = end - start;
                inUse.push({endTime + duration, room});
                roomCount[room]++;
            }
        }

        int maxMeetings = 0, resultRoom = 0;
        for (int i = 0; i < n; ++i) {
            if (roomCount[i] > maxMeetings) {
                maxMeetings = roomCount[i];
                resultRoom = i;
            }
        }

        return resultRoom;
    }
};