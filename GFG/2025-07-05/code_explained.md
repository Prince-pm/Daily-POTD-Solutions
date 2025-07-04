## 🔍 Code Explanation – Step by Step

This problem is solved using a **monotonic decreasing stack** to efficiently compute the maximum score formed by any pair of smallest elements in a subarray.

---

### 🔧 Step 1: Understand the Goal

- We need to find **two smallest elements** in any subarray of length ≥ 2.
- Instead of trying every subarray, notice that **any pair of adjacent elements** are also valid subarrays.

---

### 🧠 Step 2: Use a Stack to Track Candidates

- We process each element from left to right.
- Maintain a **monotonic decreasing stack**, so that the top is always the current smallest element.
- For every new element:
  - While the current element is **greater than or equal to** the top of the stack:
    - Pop from the stack and compute the score between the popped value and the current.
    - Update `max_score`.

---

### 🔁 Step 3: Final Cleanup

- After traversing the array:
  - There may still be elements in the stack.
  - For every adjacent pair in the stack, compute their score and update `max_score`.

---

### 📈 Step 4: Return the Result

- Return the maximum score obtained across all considered pairs.

---

### 📌 Important Notes

- The approach avoids nested loops by utilizing **monotonic properties** of the array.
- Each element is pushed and popped from the stack at most once — ensuring **O(n)** time.

---