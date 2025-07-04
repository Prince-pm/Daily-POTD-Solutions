## 💡 Concept Explanation

---

### 🔑 Goal:
Find the **k-th character** in a string that evolves through a series of operations:
- Append a copy of itself
- Append the next-character version of itself

We must avoid building the full string due to its exponential growth.

---

### 🧠 Key Idea:
Each operation **doubles the string size**, forming two parts:
- Left = original
- Right = either a copy (op=0) or a shifted version (op=1)

Rather than building the string, we track:
- The **lengths** of the string after each operation
- Whether the current `k-th` character is from the left or right half

---

### 📐 Strategy:

1. **Simulate forward** to store lengths:
   - Keep an array of string lengths at each step.
   - Length doubles at every operation.

2. **Reverse simulate** the operations:
   - Start from the last operation and go backward.
   - Adjust `k` based on whether it lies in the left or right half.
   - Keep a running `shift` count if it's in the right half from a `op=1`.

3. **Resolve base character**:
   - Once reduced to the original string `"a"`, apply the total shift to get the final character.

---

### 💼 Why It Works:

- The string size becomes exponential — we cannot store it explicitly.
- But the **structure** of growth is deterministic:
  - Always two halves
  - Can track character origins with index and shifts

---

### ⏱️ Time & Space Complexity:

- **Time Complexity:** O(m)  
  - Where `m = operations.length` (≤ 100)

- **Space Complexity:** O(m)  
  - For storing the `lengths` array

This is efficient even when `k` goes up to `10¹⁴`.

---
