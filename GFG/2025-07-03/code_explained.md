## 🔍 Code Explanation – Step by Step

This problem is a classic **sliding window with frequency map** pattern for substrings with unique constraints.

---

### 🔧 Step 1: Initialize Sliding Window

- We use two pointers: `left` and `right` to maintain a window in the string.
- A dictionary (or array of size 26) is used to **track the frequency** of each character inside the current window.
- A variable `max_len` keeps track of the length of the longest valid window.

---

### 🔄 Step 2: Expand the Window

- Increment `right` one character at a time.
- For each character:
  - Update its frequency in the map.
  - If the number of unique characters in the map is **less than or equal to `k`**, it's a potential candidate.
  - If the number of unique characters becomes **more than `k`**, we shrink the window.

---

### ➖ Step 3: Shrink the Window When Needed

- While the number of distinct characters exceeds `k`:
  - Move the `left` pointer to the right.
  - Decrease the count of the character at `left`.
  - If its count becomes 0, remove it from the map (i.e., it’s no longer in the window).

---

### 📈 Step 4: Track the Longest Valid Substring

- At each step, if the number of distinct characters is exactly `k`, we update `max_len` with the current window length.

---

### ✅ Step 5: Return the Answer

- If `max_len` was never updated (still -1), return `-1` meaning no valid substring was found.
- Otherwise, return `max_len`.

---

### 📌 Important Notes

- The window always moves forward (no backtracking), so it's **O(n)** time.
- The map holds at most 26 lowercase characters, so space is effectively constant.
