## 🔍 Code Explanation – Step by Step

This solution counts binary strings of length `n` that contain **at least one pair of consecutive 1s**, using a dynamic programming approach based on complement counting.

---

### ⚙️ Step 1: Understand the Total Count

Every binary string of length `n` can have only `0`s and `1`s, so the total number of such strings is `2^n`.  
However, directly counting the number of strings that contain consecutive `1`s is complex.

Instead, we simplify the problem by:
- **Counting the number of valid binary strings that do not contain any consecutive 1s**
- Subtracting that from the total to get the answer:
  
**Result = Total strings - Valid strings without consecutive 1s**

---

### 🔄 Step 2: Dynamic Programming for Valid Strings

We use two variables to keep track of valid binary strings of a given length `i`:

- `a` stores the count of valid strings ending in `'0'`
- `b` stores the count of valid strings ending in `'1'`

We initialize them for strings of length 1:
- One valid string ending in `'0'`: `"0"`
- One valid string ending in `'1'`: `"1"`

Now, for strings of length 2 to `n`, we apply recurrence relations:
- A valid string ending in `'0'` can be formed by appending `'0'` to any valid string of length `i-1` (whether it ended in `'0'` or `'1'`).
- A valid string ending in `'1'` can only be formed by appending `'1'` to a string that ended in `'0'`, to avoid consecutive 1s.

This logic is applied iteratively, updating `a` and `b` at each step up to length `n`.

---

### ➕ Step 3: Compute Final Result

After the loop:
- The total number of valid strings of length `n` without consecutive 1s is the sum of the current values of `a` and `b`.
- The total number of binary strings of length `n` is calculated as `2^n`.
- The number of binary strings **with at least one pair of consecutive 1s** is found by subtracting the valid count from the total.

---

### 📌 Notes:

- This approach avoids generating all binary strings, making it efficient and scalable.
- Bit manipulation (`2^n`) is performed using a left shift operation for faster computation.
- Only two variables (`a` and `b`) are maintained at any time, so the space complexity remains constant.

---

### ⏱ Time & Space Complexity:

- **Time Complexity:** O(n) – One loop from 2 to `n`
- **Space Complexity:** O(1) – Only two integer variables are used throughout

---
