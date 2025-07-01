## 🔍 Code Explanation – Step by Step

---

### 🧭 Initialization:
- Start with a frequency map to store how many times each character appears in the current window.
- Initialize a counter to keep track of the number of valid substrings.
- Use two pointers: `left` for the start of the window, and `right` for the end.

---

### 🚪 Sliding Window Expansion:
- Move `right` forward, adding the current character to the frequency map and updating its count.
- As the window expands, if the size exceeds `k`, we remove the character at the `left` pointer:
  - Decrease its count in the map.
  - If the count becomes zero, remove the character from the map.
  - Move `left` forward to maintain the window size.

---

### ✅ Valid Substring Check:
- If the window size is exactly `k`, check:
  - Does the number of distinct characters in the map equal `k - 1`?
  - If yes, this is a valid substring → increment the count.

---

### 🧮 Final Step:
- After scanning the entire string, return the total count of valid substrings found.

---

### 🧠 Efficiency:
- The window moves one character at a time → efficient.
- The map handles character counts dynamically → clean and optimized logic.