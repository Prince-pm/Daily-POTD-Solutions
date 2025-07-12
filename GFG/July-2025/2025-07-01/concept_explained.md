## 🧠 Concept Explanation – Substrings with k-1 Distinct Elements

---

### 🧭 Goal:
We need to count how many substrings of length `k` have **exactly `k - 1` distinct characters**.

---

### 💡 Core Idea:
This is a classic **fixed-size sliding window** problem combined with **character frequency tracking** using a hash map.

- We slide a window of size `k` across the string.
- For each window:
  - Count how many **distinct characters** it has.
  - If the count is exactly `k - 1`, it's valid.

---

### ⚙️ Why Sliding Window?
- All substrings are of the same size `k`, which is perfect for a fixed-size window.
- Using a hash map, we can update character counts efficiently as the window moves forward.

---

### 🧮 Distinct Count:
- We maintain a `freq` map of characters in the current window.
- If a character leaves the window and its count becomes zero → remove it from the map.

---

### ⏱️ Time Complexity:
- **O(n)** — Each character is added and removed from the frequency map at most once.

### 📦 Space Complexity:
- **O(k)** — At most `k` unique characters are stored in the map at any time.

---