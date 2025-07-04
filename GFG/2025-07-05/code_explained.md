## 🔍 Code Explanation – Step by Step

This problem is solved using a **monotonic stack** to identify valid candidate pairs of subarray mins efficiently in O(n) time.

---

### 🔧 Step 1: Define the Goal

- We want to find the **maximum score** from any subarray of length at least 2.
- Score = sum of smallest and second smallest elements in that subarray.

---

### 🔄 Step 2: Use a Stack for Tracking

- We use a **monotonic increasing stack** to keep track of candidate minimums.
- As we traverse the array:
  - If the current element is smaller than the top of the stack:
    - Pop the top (it’s the previous smallest)
    - The current element is the new second smallest
    - Calculate and update the score: `arr[idx] + arr[i]`

---

### ➕ Step 3: Handle Larger Current Element

- If the stack isn't empty, then:
  - The top of the stack is a valid smaller element than the current one
  - We compute: `arr[stack[-1]] + arr[i]` and update score

---

### 🔁 Step 4: Push Current Index

- Push the current index into the stack to be used as a future smallest or second smallest element.

---

### 🧾 Step 5: Final Return

- After traversing the entire array, return `max_score` as the result.

---

### 📌 Important Notes

- We never compute scores from arbitrary non-adjacent pairs — only **valid stack-based pairs**.
- Each element is pushed and popped **at most once**, ensuring O(n) time.
- Stack stores **indices**, not values — useful to compare based on positions.

---