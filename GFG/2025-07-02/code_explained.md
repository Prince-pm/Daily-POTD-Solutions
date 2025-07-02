## 🧠 Code Explanation: Longest Subarray With At Most Two Distinct Integers

---

### 🔧 Step 1: Initialize Pointers and Map

- Use two pointers: `left` and `right` to define a sliding window.
- Initialize a `count` dictionary to track the frequency of elements in the current window.
- Also maintain `max_len` to store the maximum valid subarray length found so far.

---

### 🔁 Step 2: Expand the Window

- Move the `right` pointer forward and add `arr[right]` to the count map.
- This represents expanding the window to include more elements.

---

### ⚠️ Step 3: Shrink the Window (if needed)

- If the number of distinct elements in the map exceeds 2:
  - Start moving `left` pointer to shrink the window.
  - Decrease the frequency of `arr[left]` in the map.
  - If its count becomes 0, remove it from the map.

---

### 📏 Step 4: Update Maximum Length

- After every valid window (with ≤ 2 distinct integers), update `max_len` as:
  - `max_len = max(max_len, right - left + 1)`

---

### ✅ Step 5: Return Result

- After traversing the full array, return the value of `max_len`.

---
