## 🔍 Code Explanation – Step by Step

This problem is best solved using the **sliding window technique** to efficiently count valid subarrays.

---

### 🔧 Step 1: Initialize Pointers and Frequency Map

- Use two pointers, `left` and `right`, to represent the sliding window.
- Use a hash map to store the **frequency of each element** inside the window.
- Initialize a counter `count` to track the total number of valid subarrays.

---

### 🔄 Step 2: Expand the Window with the Right Pointer

- For every new element at `right`, increment its frequency in the map.
- If this element is **new** (i.e., not in the map), it increases the count of distinct integers.

---

### ➖ Step 3: Shrink the Window if Distinct Count > k

- While the window contains **more than `k` distinct elements**:
  - Decrease the count of the element at `left`.
  - If its count becomes 0, remove it from the map.
  - Move `left` forward to reduce the window size.

---

### ➕ Step 4: Count Valid Subarrays

- At each position, the number of subarrays ending at `right` and satisfying the condition is:
  - `right - left + 1`
- Add this number to the total count.

---

### ✅ Step 5: Return the Count

- After processing the entire array, return the total count of valid subarrays.

---

### 📌 Important Notes

- The key observation is that **every time the window is valid**, all subarrays ending at `right` starting from `left` are valid.
- We never move the `left` pointer backward → linear time guarantee.

---