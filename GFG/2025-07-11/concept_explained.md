## 💡 Concept Explanation

---

### 🔑 Goal:

Count the number of **binary strings of length `n`** that contain **at least one pair of consecutive 1s**.

---

### 🧠 Key Idea:

Instead of directly counting strings **with** consecutive 1s (which is complex), we use the idea of **complement counting**:

- First, count the number of **valid binary strings without any consecutive 1s**.
- Subtract that from the total number of binary strings of length `n`, i.e., `2^n`.

---

### 📐 Strategy:

Let’s define:
- `a[i]`: Number of valid strings of length `i` ending with `0`
- `b[i]`: Number of valid strings of length `i` ending with `1`

We build the counts using the following recurrence:

- `a[i] = a[i-1] + b[i-1]` → You can add a `0` after any valid string of length `i-1`
- `b[i] = a[i-1]` → You can add a `1` only if previous bit was `0` (to avoid consecutive 1s)

**Base Cases:**
- `a[1] = 1` (string = "0")
- `b[1] = 1` (string = "1")

**Total valid strings of length `n` without consecutive 1s:** `a[n] + b[n]`

---

### ⏱ Time & Space Complexity:

- **Time Complexity:** O(n)  
  (Loop from 2 to n once)
  
- **Space Complexity:** O(1)  
  (Only need to store two variables `a` and `b` at a time)

---