## 💡 Concept Explanation

---

### 🔑 Goal:
Find the length of the **longest contiguous subarray** that contains **at most two distinct integers**.

---

### 🧠 Key Idea:
When scanning through an array, you want to **maintain a valid window** where the number of distinct integers does not exceed 2.

This is done efficiently using the **Sliding Window + HashMap** approach.

---

### 📐 Strategy:

1. Use two pointers (`left`, `right`) to define a window on the array.
2. Use a hash map to track the **frequency** of each integer in the current window.
3. Expand the `right` pointer and add elements to the window.
4. If the map size exceeds 2:
   - Shrink the window from the left until only 2 distinct integers remain.
5. At each step, update the **maximum window size**.

---

### 💼 Why It Works:
- You’re always maintaining a **valid window** with at most two distinct numbers.
- Shrinking and expanding is done in a way that ensures **every element is processed once**, giving linear time performance.

---

### ⏱️ Time & Space Complexity:

- **Time Complexity:** O(n)  
  - Each element is added and removed from the window at most once.

- **Space Complexity:** O(1)  
  - At most 3 keys exist in the frequency map at any time (due to the two-distinct condition).

---
