## 🔍 Code Explanation – Step by Step

This solution simulates the scheduling of meetings to rooms and identifies the room that hosted the most meetings.

---

### ⚙️ Step 1: Sorting the Meetings

- The first step is to **sort the meetings** by their start time. This ensures that we process the meetings in the correct order.

---

### 🔄 Step 2: Using Min-Heaps for Room Availability

- Two min-heaps are used:
  - **`available`**: Keeps track of rooms that are available. Initially, all rooms are free and added to this heap.
  - **`inUse`**: Keeps track of rooms that are currently occupied by a meeting. The heap stores pairs of `{endTime, roomNumber}`, where `endTime` is the time the current meeting will end.
  
- These heaps allow us to efficiently find the earliest available room and the room that will become free the soonest.

---

### ➕ Step 3: Processing Each Meeting

- For each meeting:
  - **Free up rooms**: First, check if there are any rooms whose meetings have ended by the current meeting’s start time. If so, free those rooms by moving them to the `available` heap.
  
  - **Assign a Room**:
    - If there is a room available, assign the current meeting to the room with the smallest number (because we use a min-heap).
    - If no rooms are available, pick the room whose meeting ends the soonest. **Delay the meeting** and adjust the meeting's end time accordingly.

  - For each room used, we increment its counter in the `roomCount` array, which tracks how many meetings each room has hosted.

---

### 📌 Step 4: Final Calculation

- After processing all meetings, the room with the highest count in `roomCount` is the one that held the most meetings. If there are multiple rooms with the same count, return the one with the smallest index (as per the problem's requirements).

---

### ⏱ Time & Space Complexity:

- **Time Complexity:** `O(m log n)`  
  - `m = meetings.size()`, `n = number of rooms`
  - Sorting meetings takes `O(m log m)`
  - Each heap operation (push/pop) for a meeting takes `O(log n)`

- **Space Complexity:** `O(n + m)`  
  - For storing room counts, heaps, and meetings
  
---
