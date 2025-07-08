## 💡 Concept Explanation

---

### 🔑 Goal:

Maximize the **total value** from **at most k non-overlapping events**.  
Each event has a `startDay`, `endDay`, and `value`.

---

### 🧠 Key Idea:

Use **Dynamic Programming** combined with **Binary Search** for efficiency.

For every event, we consider:
- **Not attending** the event and keeping the current state.
- **Attending** the event and moving to the **previous non-overlapping** event that ends before the current one starts.

---

### 📐 Strategy:

1. **Sort Events by End Time:**
   - Ensures that for any event `i`, all earlier events have ended on or before its start day.

2. **Binary Search to Find Compatible Events:**
   - For each event `i`, find the last event `j < i` where `endDay[j] < startDay[i]`.
   - This gives the best possible previous event we can attend without overlapping.

3. **Dynamic Programming Table `dp[i][j]`:**
   - Represents the **maximum value** obtained by considering the first `i` events and attending at most `j` events.

4. **Transition Formula:**
   - `dp[i + 1][j] = max(dp[i][j], dp[prev][j - 1] + value[i])`
   - Either skip event `i`, or attend it and add its value to the best compatible event found before.

---

### ⚡ Why This Works:

- Attending the event with the highest value while ensuring non-overlapping is similar to the **weighted interval scheduling problem**.
- Binary search allows us to quickly find non-overlapping candidates, keeping complexity low.

---

### ⏱ Time & Space Complexity:

- **Time Complexity:** O(n * k * log n)  
  - Sorting: O(n log n)  
  - Each DP state: O(log n) for binary search × O(n * k)

- **Space Complexity:** O(n * k)  
  - For the DP table

---
