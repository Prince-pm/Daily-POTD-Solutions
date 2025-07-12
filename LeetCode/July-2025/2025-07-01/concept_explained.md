## 💡 Concept Explanation

---

### 🔑 Goal:
Determine the total number of **valid original strings** Alice could have typed, considering:
- She might have **pressed one key for too long**
- That mistake could happen **at most once**

---

### 🧠 Key Idea:
The string we have is the **final output** which may contain a stretch of repeated characters due to a long key press.

We want to find how many **distinct original strings** could have led to this output, allowing **at most one shortening** (i.e., trimming one group of repeated characters).

---

### 📐 Strategy:
1. **Group consecutive identical characters**.
   - For example: `"abbcccc"` → ['a',1], ['b',2], ['c',4]

2. Count all possible shortened versions for **each group of length ≥ 2**:
   - We can form `length - 1` shortened versions (by trimming 1 up to all but 1 character)
   - But since **only one mistake is allowed**, each group contributes **individually** to possible original versions.

3. **Include the original string** as one valid output.

---

### 💼 Why It Works:
- Every character group simulates a possible long-press error.
- We assume the rest of the string was typed correctly.
- Summing all `len - 1` values across groups mimics all “just one mistake” scenarios.

---

### ⏱️ Time & Space Complexity:
- **Time Complexity:** O(n) – single scan for grouping + single loop over groups
- **Space Complexity:** O(n) – for storing character groups

---