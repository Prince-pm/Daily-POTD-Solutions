## 🔍 Code Explanation – Step by Step

This problem can be efficiently solved using a **monotonic stack** and a **reverse traversal** to simulate circular behavior.

---

### 🔧 Step 1: Initialize Result and Stack

- Create a result array of size `n`, initialized with `-1` for each position.
- Prepare an empty stack to store elements in decreasing order (monotonic stack).

---

### 🔄 Step 2: Simulate Circular Array

- Traverse the array **twice** (from index `2n - 1` down to `0`) to simulate the circular nature.
- Use modulo operation to wrap around the array when the index exceeds `n - 1`.

---

### 🧹 Step 3: Maintain Monotonic Stack

- For each element:
  - Remove all elements from the stack that are **less than or equal** to the current element.
  - This ensures the top of the stack always has the **next greater candidate**.

---

### 🧭 Step 4: Assign Next Greater Element

- Only assign results during the **first pass (i < n)**:
  - If the stack is not empty, the top of the stack is the next greater element for the current index.
  - If the stack is empty, it means no greater element exists → keep `-1`.

---

### 📥 Step 5: Push Current Element to Stack

- Push the current element (via circular indexing) onto the stack to act as a future NGE candidate for earlier elements.

---

### 🧾 Final Step: Return Result Array

- After completing both passes, the result array contains the **next greater element** for every index in the original array.

---

### 📌 Important Notes

- The **monotonic decreasing stack** helps efficiently track the next greater values in O(n) time.
- Traversing the array twice with modulo allows us to simulate the **circular** property without modifying the array.
- Every element is pushed and popped at most once → ensures linear time complexity.

---
