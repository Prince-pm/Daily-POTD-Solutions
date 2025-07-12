## 🔍 Code Explanation – Step by Step

### 🔧 Data Structures:
- `unordered_map<int, int> freq` → Stores the frequency of each number in the array.
- `int maxLength` → Tracks the maximum length of a harmonious subsequence.

---

### 🔁 Step 1: Frequency Count
- Iterate through the input `nums`:
  - For each number, increase its count in `freq`.
- Purpose: Quickly lookup how often any number appears in constant time.

---

### 🔁 Step 2: Scan for Harmonious Pairs
- Iterate through each `(key, value)` pair in `freq`:
  - Check if `key + 1` exists in the map.
    - If it does, `key` and `key + 1` form a harmonious subsequence.
    - The length of this subsequence = `freq[key] + freq[key + 1]`
  - Update `maxLength` if this length is greater than the current max.

---

### 📌 Why Only `key + 1`?
- Because the problem defines a harmonious subsequence as one where `max - min = 1`.
- We avoid `abs()` by checking only increasing order (`key + 1`), ensuring we don’t count the same pair twice.

---

### 🧠 Edge Case:
- If no such `key + 1` pair exists, `maxLength` remains `0`.

---

### ✅ Final Output:
- After processing all keys, return the maximum harmonious subsequence length stored in `maxLength`.
