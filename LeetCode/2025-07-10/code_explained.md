## 🔍 Code Explanation – Step by Step

---

### 📦 Step 1: Calculate Idle Times

- Compute idle gaps:
  - Gap before the first meeting: `startTime[0]`
  - Between meetings: `startTime[i] - endTime[i - 1]`
  - Gap after the last meeting: `eventTime - endTime[n - 1]`

---

### 🔄 Step 2: Build Prefix and Suffix Maximum Arrays

- `leftMax[i]` stores the largest idle time up to index `i`
- `rightMax[i]` stores the largest idle time from index `i` to the end

This allows fast lookup of the best possible free time outside a given meeting’s position.

---

### 🔁 Step 3: Try Rescheduling Each Meeting

For each meeting:
- Get its **duration**
- Compute the merged gap if this meeting is removed: `idleSlots[i] + idleSlots[i+1]`
- Check the **maximum gap outside this range** using `leftMax` and `rightMax`
  - If the meeting can fit into that gap (i.e., duration ≤ maxGap), then this reschedule is valid
- Calculate the total free time (mergedGap + duration) and update result

---

### 🧾 Step 4: Return the Maximum Free Time

After trying all possible meetings, return the best result.

---

### 📌 Notes:

- Efficient and linear solution using gap merging and prefix/suffix arrays
- Works well for large inputs due to tight control over iteration and data access
- Carefully handles edge cases (e.g., rescheduling first or last meeting)

---
