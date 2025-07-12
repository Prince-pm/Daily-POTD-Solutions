## 💡 Concept Explanation

---

### 🔑 Goal:

Implement a data structure that can:

- Efficiently **add a value** to an index in `nums2`
- Quickly **count the number of pairs** from `nums1` and `nums2` that sum to a target value

---

### 🧠 Key Ideas:

- **nums1 is small**, so we can iterate through it freely.
- **nums2 is large**, so we **avoid direct iteration**.
- Use a **frequency map** for `nums2` to keep lookup operations fast.

---

### 🧰 Design Strategy:

1. **Constructor**:
   - Store the arrays.
   - Create a frequency map `freq2` for elements of `nums2`.

2. **Add Operation**:
   - Update the frequency map to reflect the added value at the given index in `nums2`.

3. **Count Operation**:
   - For each element in `nums1`, compute `target = tot - nums1[i]`.
   - Count how many times `target` appears in `nums2` using `freq2`.

---

### 💼 Why This Works:

- Because `nums1` is small, iterating it during count queries is cheap.
- Frequency map makes it fast to count required complements from `nums2`.

---

### ⏱️ Time & Space Complexity:

- **Constructor:** O(n₂) for building `freq2`
- **add():** O(1)
- **count():** O(n₁)
- **Space Complexity:** O(n₂) due to frequency map of `nums2`

---
