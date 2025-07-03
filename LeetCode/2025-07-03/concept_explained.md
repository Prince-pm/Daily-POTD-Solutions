## 💡 Concept Explanation

---

### 🔑 Goal:
Determine the **k-th character** in a string that is repeatedly transformed by:
- Appending the **next characters** of its current content.
- Each character is shifted by one in the English alphabet, with `'z'` wrapping around to `'a'`.
- This process is performed until the string reaches at least **k characters** in length.

---

### 🧠 Key Idea:
The string evolves in a **self-replicating and self-modifying pattern**:
- Start with `"a"`.
- At each step, create a new string by converting every character to its next one, and **append** this to the original.
- This builds a **deterministic and expanding structure** where the second half is the shifted version of the first half.

---

### 📐 Strategy:

1. **Begin with** a single character `"a"`.

2. **Apply the operation repeatedly**:
   - For every character in the current string:
     - Replace it with its next character (`'z'` becomes `'a'`).
   - Append the result to the end of the original string.

3. **Repeat until**:
   - The resulting string has a length **greater than or equal to `k`**.

4. **Return the `k-th` character**:
   - Since strings are 0-indexed, return the character at position `k - 1`.

---

### 💼 Why It Works:
- The string construction is **fully predictable and follows a fixed transformation**.
- As each operation roughly **doubles** the string size, the length grows rapidly.
- Since `k ≤ 500`, it takes very few iterations to reach the required size.
- Simulating the process directly ensures we get the exact character at position `k`.

---

### ⏱️ Time & Space Complexity:

- **Time Complexity:** O(k²) in the worst case  
  - Each iteration may process up to `k` characters.
  - Since we may need multiple iterations, total operations are bounded by `O(k²)`.

- **Space Complexity:** O(k)  
  - We only need to store the evolving string until it reaches `k` length.

---