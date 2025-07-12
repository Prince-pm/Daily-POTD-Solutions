## 💡 Concept Explanation

---

### 🔑 Goal:
Find the **length of the longest substring** in a given string that contains **exactly `k` distinct characters**.

---

### 🧠 Key Idea:
Use the **sliding window technique** to dynamically track a substring with:
- A start (`left`) and end (`right`) pointer
- A character frequency map
- A count of distinct characters in the window

This allows us to efficiently maintain and update the window while scanning the string only once.

---

### 📐 Strategy:

1. **Expand the window** by moving the `right` pointer.
2. **Track frequency** of characters inside the current window.
3. If the number of unique characters becomes **more than `k`**:
   - Shrink the window from the left until only `k` distinct characters remain.
4. If the number of unique characters is **exactly `k`**, update `max_len`.

---

### 💼 Why It Works:

- Every character is added and removed from the window at most once.
- The process guarantees linear time complexity.
- Character frequency ensures we know when to remove characters from our distinct count.

---

### ⏱️ Time & Space Complexity:

- **Time Complexity:** O(n)  
  - Each character is processed once as the window expands and contracts.

- **Space Complexity:** O(1)  
  - We only need a frequency map of lowercase English letters (fixed size 26).

---
