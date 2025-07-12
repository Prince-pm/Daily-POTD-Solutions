## 💡 Concept Explanation

---

### 🔑 Goal:

Reschedule up to `k` meetings (while keeping durations and order) to **maximize the longest contiguous free time** during the event.

---

### 🧠 Key Idea:

Every meeting creates a **gap** between the end of one and the start of the next.  
We aim to **move `k` consecutive meetings to the start**, which will consolidate their durations and **shift the gap** towards the end of the schedule — making it potentially **larger**.

---

### 📐 Strategy:

1. **Compute Gaps:**
   - There are `n + 1` gaps:
     - `gap[0]` = start of first meeting (`startTime[0]`)
     - `gap[i]` = `startTime[i] - endTime[i - 1]` for `1 ≤ i < n`
     - `gap[n]` = `eventTime - endTime[n - 1]`

2. **Sliding Window of Gaps:**
   - If you reschedule `k` consecutive meetings to start at 0, it opens a **window of k+1 consecutive gaps**.
   - Use a **sliding window of size `k+1`** to find the **maximum gap sum**.

---

### ⚡ Why This Works:

- By grouping `k` meetings at the start, you're left with a big window of potential **free time** in the rest.
- The largest such gap block among all combinations is your answer.

---

### ⏱ Time & Space Complexity:

- **Time:** O(n)  
  - Compute all gaps and apply sliding window in one pass.
- **Space:** O(n)  
  - To store the gap array.

---
