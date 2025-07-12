## 💡 Concept Explanation

---

### 🔑 Goal:
Find the **top `k` maximum sums** from all valid combinations of `a[i] + b[j]` using:
- One element from `a`
- One element from `b`
- No duplicate index pairs

---

### 🧠 Key Idea:
Use a **greedy + heap-based approach** to efficiently find the largest k sums.

Brute-force (O(n²)) is too slow, so we need to:
- Sort arrays to prioritize large elements
- Use a max-heap to track potential top sums
- Use a `visited` set to avoid recomputing same index pairs

---

### 📐 Strategy:

1. **Sort `a` and `b`**:
   - Sorting helps generate the biggest sums first.

2. **Use Max Heap**:
   - Insert `a[0] + b[0]` as starting point.
   - Push neighbors `(i+1, j)` and `(i, j+1)`.

3. **Track Visited Pairs**:
   - Avoid pushing `(i, j)` more than once.
   - Ensure heap has unique and meaningful combinations.

4. **Pop Top K Elements**:
   - Pop from heap `k` times.
   - Each time, consider next largest possible sum.

---

### 💼 Why It Works:

- Similar to merging sorted arrays with top-k results.
- Heap always contains next best candidate sum.
- The set ensures we never revisit same index pair.

---

### ⏱️ Time & Space Complexity:

- **Time Complexity:** O(k log k + n log n)  
  - Sorting both arrays: O(n log n)  
  - Each heap operation (push/pop) is O(log k), repeated up to k times

- **Space Complexity:** O(k)  
  - For heap and visited pairs

---
