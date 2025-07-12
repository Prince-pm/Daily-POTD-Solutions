## 💡 Concept Explanation

---

### 🔑 Goal:

For each element in the array, find the **next element to the right** with a **higher frequency** than the current one.

---

### 🧠 Key Idea:

Use a **monotonic stack** and **frequency map** (hashmap) to simulate "next greater element", but instead of comparing values, we compare **frequencies**.

---

### 📐 Strategy:

1. **Frequency Count:**
   - First, compute frequency of each element using a hashmap.

2. **Traverse in Reverse:**
   - Iterate from right to left to efficiently find the next greater frequency using a stack.

3. **Use Stack to Track Candidates:**
   - Maintain elements in a stack whose frequency is **greater than** current.
   - If top of stack has higher frequency → it is the answer for current index.

4. **Update Stack:**
   - Pop from stack until you find a frequency strictly greater than current.
   - Push current element to be available for the next elements to the left.

---

### ⚡ Why This Works:

- Stack ensures we always compare against the closest elements to the right.
- Reverse traversal allows efficient comparison and avoids revisiting.

---

### ⏱ Time & Space Complexity

- **Time:** O(n) → each element is pushed/popped at most once  
- **Space:** O(n) for frequency map, result, and stack

---
