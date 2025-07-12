## 💡 Concept Explanation

---

### 🔑 Goal:
Count the number of **contiguous subarrays** in the input array that contain **at most `k` distinct integers**.

---

### 🧠 Key Idea:
We use a **sliding window** approach to keep track of a range (`left` to `right`) such that:
- The number of distinct integers in this range is ≤ `k`.
- All subarrays ending at the current `right` index and starting from `left` to `right` are valid.

---

### 📐 Strategy:

1. **Use a hashmap or frequency array**:
   - To count occurrences of each element in the window.

2. **Expand the window** by moving `right`:
   - Add the current element to the map.

3. **Shrink the window** if the number of distinct elements exceeds `k`:
   - Move `left` forward while updating the frequency map.

4. **For each valid window**:
   - Add `(right - left + 1)` to the result — this is the number of subarrays ending at `right`.

---

### 💼 Why It Works:

- The key insight is that **for every valid window**, each starting point from `left` to `right` forms a valid subarray ending at `right`.
- The window always moves forward → ensures **O(n)** time.

---

### ⏱️ Time & Space Complexity:

- **Time Complexity:** O(n)  
  - Each element is added/removed from the window at most once.

- **Space Complexity:** O(k)  
  - We only maintain a frequency map of at most `k` unique elements.

---
