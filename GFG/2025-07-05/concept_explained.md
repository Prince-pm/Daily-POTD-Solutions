## 💡 Concept Explanation

---

### 🔑 Goal:
Determine the **maximum score** from any subarray of size at least 2, where score = min + second min.

---

### 🧠 Key Idea:
Use a **monotonic increasing stack** to track potential smallest and second smallest elements efficiently while scanning the array.

---

### 📐 Strategy:

1. **Stack helps track ordering**:
   - As you scan, compare current value with stack top.
   - If current is smaller → you found a better min.
   - If current is larger → compute valid score with stack top.

2. **Why Stack Works**:
   - It naturally holds the **next greater or smaller** relationship.
   - Ensures every pair you compute is valid and adjacent in the sequence.

3. **Push/Pull Logic**:
   - Pop when current < stack top → means smaller value has been found
   - Compute possible score during this time
   - Push index every time to maintain future comparisons

---

### 💼 Why It Works:

- Brute-force all subarrays would be O(n²)
- Stack helps you simulate all valid pairings in O(n)
- All valid candidate pairs for "min + second min" are processed via stack logic

---

### ⏱️ Time & Space Complexity:

- **Time Complexity:** O(n)  
  - Each element is pushed and popped at most once

- **Space Complexity:** O(n)  
  - For storing the monotonic stack

---
