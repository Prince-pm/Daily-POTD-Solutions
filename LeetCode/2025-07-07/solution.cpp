class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        // Step 1: Sort events by start day
        sort(events.begin(), events.end());

        // Min-heap to store end days of available events
        priority_queue<int, vector<int>, greater<int>> minHeap;

        int day = 1, i = 0, n = events.size(), attended = 0;

        // Find the last possible day any event ends
        int lastDay = 0;
        for (const auto& e : events)
            lastDay = max(lastDay, e[1]);

        // Step 2: Simulate each day
        while (day <= lastDay) {
            // Step 3: Add all events starting today
            while (i < n && events[i][0] == day) {
                minHeap.push(events[i][1]); // Push event's end day
                i++;
            }

            // Step 4: Remove all events that have already expired
            while (!minHeap.empty() && minHeap.top() < day) {
                minHeap.pop();
            }

            // Step 5: Attend the event that ends earliest
            if (!minHeap.empty()) {
                minHeap.pop(); // Attend one event today
                attended++;
            }

            day++; // Move to next day
        }

        return attended;
    }
};