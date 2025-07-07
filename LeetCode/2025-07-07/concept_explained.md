## 💡 Concept Explanation

---

### 🔑 Goal:

Attend the **maximum number of non-overlapping events**, where each event can be attended on any day between `startDay` and `endDay`.  
You can only attend **one event per day**.

---

### 🧠 Key Idea:

Use a **Greedy + Min-Heap (Priority Queue)** strategy to always attend the **earliest finishing** event that’s available on the current day.

---

### 📐 Strategy:

1. **Sort Events by Start Day:**
   - This allows us to process events in the order they become available.

2. **Use a Min-Heap (priority queue):**
   - The heap stores end days of all events currently available.
   - At each day, we pop the event that ends the earliest to attend it.

3. **Simulate Day-by-Day Processing:**
   - Start from the earliest start day.
   - On each day:
     - Add all events starting today to the heap.
     - Remove events that have already ended (i.e., end day < current day).
     - Attend the event with the earliest end day (pop from heap).
     - Move to the next day.

---

### 📈 Why Greedy Works:

- Attending the **earliest finishing** event ensures maximum flexibility for future events.
- Similar to the **Interval Scheduling** problem where we pick the job with the earliest end time.

---

### ⏱️ Time & Space Complexity:

- **Time Complexity:** O(n log n)  
  - Sorting the events takes O(n log n).  
  - Heap operations are log n, done at most n times.

- **Space Complexity:** O(n)  
  - For storing events and heap.

---
