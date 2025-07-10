## 🔍 Code Explanation – Step by Step

This solution finds the longest word such that all its prefixes are present in the input array.

---

### 📦 Step 1: Store Words in Set

- Convert `arr[]` into a set for O(1) lookup when checking prefixes.

---

### 🔁 Step 2: Loop Over Each Word

- For every word, check:
  - Are all prefixes (excluding full word) present?
    - For example, for `"probl"`, check `"p"`, `"pr"`, `"pro"`, `"prob"`

---

### ✔️ Step 3: If Valid, Compare with Result

- If the word has all prefixes:
  - If it’s longer than `longest`, update it.
  - If same length but lexicographically smaller, update it.

---

### 🧾 Step 4: Return the Result

- After all checks, return the final longest valid word found.

---

### 📌 Notes:

- Prefix check ensures word can be built one character at a time.
- The lexicographic condition ensures deterministic output in case of ties.

---
