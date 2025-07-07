## 💡 Concept Explanation

---

### 🔑 Goal:
For each element in a **circular array**, find the **Next Greater Element (NGE)** — the first element that is **greater** when moving clockwise.

---

### 🧠 Key Idea:
Use a **monotonic stack** and simulate the circular nature by iterating the array **twice**.

A brute-force approach (checking each next element in circular fashion) would take **O(n²)** time.  
Instead, we can achieve **O(n)** using a stack that keeps track of potential next greater elements efficiently.

---

### 📐 Strategy:

1. **Double the Traversal**:
   - Iterate from `2n - 1` to `0` to simulate circular behavior using `arr[i % n]`.

2. **Use Stack to Track NGEs**:
   - Maintain a decreasing stack: remove all elements from the stack that are ≤ current.
   - If the stack is not empty, the top is the NGE.
   - Push current element onto the stack.

3. **Build Result in Reverse**:
   - Since we iterate from end to start, fill the result array accordingly.

---

### 📌 Example Walkthrough:

For `arr = [1, 3, 2, 4]`,  
We process the indices like this: `i = 7, 6, 5, ..., 0`  
and use `i % n` to wrap around circularly.

Stack trace and decisions:
- i = 3 (val=4): stack empty → result[3] = -1 → push 4  
- i = 2 (val=2): stack top = 4 → result[2] = 4 → push 2  
- i = 1 (val=3): pop 2, top = 4 → result[1] = 4 → push 3  
- ...

---

### 💼 Why It Works:

- The stack stores elements in **decreasing order** of value.
- At each step, we remove smaller elements from the stack that can’t be NGE.
- By looping twice, we handle the **circular property** efficiently.

---

### ⏱️ Time & Space Complexity:

- **Time Complexity:** O(n)  
  - Each element is pushed and popped from the stack at most once.

- **Space Complexity:** O(n)  
  - For stack and output array.

---
