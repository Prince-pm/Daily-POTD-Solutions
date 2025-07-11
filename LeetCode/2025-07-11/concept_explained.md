## 💡 Concept Explanation

---

### 🔑 Goal:

The problem requires assigning meetings to rooms, handling cases where meetings overlap. We need to:
- **Assign** meetings to rooms with the lowest available room number.
- If no room is available, **delay** the meeting until a room becomes free.
- Finally, **return the room** with the most meetings.

---

### 🧠 Key Idea:

We use **two min-heaps**:
1. **Available Rooms**: A heap to store rooms that are available, allowing us to efficiently assign meetings to the room with the smallest index.
2. **In-Use Rooms**: A heap to store ongoing meetings with their respective room numbers and end times.

We simulate the scheduling process:
- Sort meetings by start time.
- As each meeting arrives:
  - Free up rooms that are done with their meetings.
  - Assign a room from the available ones or delay the meeting and assign the room that finishes the earliest.

---

### 📐 Strategy:

1. **Sort meetings**: First, sort the meetings by their start time to handle them in order.
2. **Min-heaps for room management**:
   - Use the **available** heap to store available room numbers.
   - Use the **in-use** heap to manage ongoing meetings with their end times.
3. For each meeting:
   - **Free rooms** that are done before the current meeting's start time.
   - Assign the earliest available room or delay the meeting until a room becomes free.
4. Track how many meetings each room has hosted.

---

### ⏱ Time & Space Complexity:

- **Time Complexity:** O(m log n)  
  - `m = meetings.size()`, `n = number of rooms`
  - Sorting meetings takes `O(m log m)`
  - Each heap operation (push/pop) for a meeting takes `O(log n)`

- **Space Complexity:** O(n + m)  
  - For storing room counts, heaps, and meetings

---
