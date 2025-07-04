## 🔍 Code Explanation – Step by Step

This problem is a **backward simulation using recursion** and length tracking instead of full string construction.

---

### 🔧 Step 1: Understand the Operation Effects

- Operation `0`: Doubles the string → `word = word + word`
- Operation `1`: Doubles the string by adding the **incremented version** → `word = word + increment(word)`

Both operations **double** the length of the string.

---

### 🧠 Step 2: Track Only Lengths

- Instead of actually building the string, keep track of its **length** at every step.
- We store a `lengths[]` array where `lengths[i]` is the length of the string after the first `i` operations.

---

### 🔄 Step 3: Simulate Backward

- Start from the final operation and **reverse-engineer** where the `k-th` character must have come from.
- For each operation (going backward):
  - If `k <= half_length`: It came from the original left half.
  - Else:
    - For `op == 0`: It came from the same character in the left half → `k -= half_length`
    - For `op == 1`: It came from the incremented character in the left half → `k -= half_length` and mark it as **shifted**

---

### 🔁 Step 4: Reconstruct the Character

- Eventually, we reach the base string `"a"`.
- Apply the number of shifts (caused by op=1) modulo 26 to get the final character.

---

### 📌 Important Notes

- This method avoids building the actual string.
- Handles `k` up to `10¹⁴` efficiently using O(operations.length) time.
- Shift operations accumulate alphabetic offset.

---