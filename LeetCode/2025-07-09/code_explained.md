## 🔍 Code Explanation – Step by Step

We use a **sliding window of size `k+1`** over the gaps between meetings to compute the **maximum free time**.

---

### 🔧 Step 1: Compute All Gaps

- `gap[0] = startTime[0]` (from event start to first meeting)
- `gap[i] = startTime[i] - endTime[i-1]` for `1 ≤ i < n`
- `gap[n] = eventTime - endTime[n-1]` (from last meeting to end of event)

---

### 🔁 Step 2: Sliding Window Sum

- Use a window of size `k+1` over the `gap[]` array.
- For each window:
  - Keep track of sum of current `k+1` gaps.
  - Update `maxFreeTime` if the sum is larger.

---

### 🧾 Step 3: Return Maximum Found

- Return the maximum sum of `k+1` consecutive gaps found across all windows.

---

### 📌 Key Points

- Only gaps matter — not actual meeting times.
- Moving `k` meetings lets you isolate `k+1` gaps and shift them to end.
- Sliding window gives optimal result efficiently.

---
