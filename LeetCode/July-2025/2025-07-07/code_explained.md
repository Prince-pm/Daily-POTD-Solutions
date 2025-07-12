## 🔍 Code Explanation – Step by Step

This problem can be efficiently solved using a **Greedy algorithm** with a **Min-Heap (Priority Queue)** to always choose the earliest ending event that can be attended each day.

---

### 🔧 Step 1: Sort Events by Start Day

- Begin by sorting the list of events based on their `startDay`.
- Sorting helps us process the events in chronological order as they become available.

---

### 📆 Step 2: Initialize Variables

- Use a **min-heap** to keep track of event end days.
- Use a **pointer** to iterate over events.
- Track the **current day** starting from the minimum start day to the last possible end day.

---

### ➕ Step 3: Add Events Available Today

- For each day:
  - Add all events that **start today** to the heap by pushing their `endDay`.
  - These events become available to attend starting from today.

---

### 🧹 Step 4: Remove Expired Events

- Before attempting to attend any event:
  - Remove events from the heap whose `endDay` is **less than the current day**.
  - These events have expired and cannot be attended anymore.

---

### ✅ Step 5: Attend the Earliest Finishing Event

- If the heap is not empty:
  - Pop the top (smallest end day) from the heap.
  - It represents the event that finishes earliest and is currently available.
  - Increment the count of events attended.

---

### 🔁 Step 6: Continue Until All Events Are Processed

- Keep repeating steps 3–5 for each day until:
  - All events have been processed,
  - And the heap becomes empty (i.e., no more events left to attend).

---

### 🧾 Final Step: Return the Count

- After processing all days and events, return the **total number of events attended**.

---

### 📌 Important Notes

- Choosing the event that ends earliest maximizes the chance of fitting in more events later.
- The **priority queue** ensures quick access to the next event to attend.
- Efficient event management per day makes this greedy solution optimal for large inputs.

---
