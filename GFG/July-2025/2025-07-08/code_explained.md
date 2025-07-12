## 🔍 Code Explanation – Step by Step

This problem is solved using a **monotonic stack** and **frequency counting**.

---

### 📊 Step 1: Count Frequencies

- Use a hashmap (Counter) to store frequency of each element.
- This allows O(1) lookup for each element’s frequency later.

---

### 🔄 Step 2: Traverse the Array in Reverse

- We iterate from the end of the array toward the start.
- This is necessary to track the "next" elements using a stack.

---

### 📥 Step 3: Maintain a Stack of Candidates

- While stack is not empty and frequency of top of stack is **less than or equal** to current:
  - Pop it — it cannot be the "greater frequency" we're looking for.

---

### ✅ Step 4: Assign Result

- If the stack is not empty after popping, the top of the stack is the next element with greater frequency.
- Otherwise, keep -1 as default.

---

### 📌 Step 5: Push Current Element

- Push the current element into the stack so it can be a potential answer for future elements to the left.

---

### 🧾 Final Step: Return Result

- After processing all elements, return the result list containing answers for all indices.

---
