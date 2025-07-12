## 💡 Concept Explanation

---

### 🔑 Goal:
Find the largest number in the array `arr` such that:
- Its **value is equal to the number of times it appears** in the array.

---

### 🧠 Key Idea:
This is a **frequency matching** problem.

If a number appears `x` times in the array and that number is also `x`, then it's a **lucky number**.

---

### 📐 Strategy:

1. **Frequency Counting**:
   - Traverse the array once and build a frequency table using a map or array.

2. **Identify Lucky Integers**:
   - Traverse the frequency table.
   - If `key == frequency[key]`, add it to a list of lucky numbers.

3. **Get the Maximum**:
   - Return the **largest lucky number** from that list.
   - If list is empty, return `-1`.

---

### 💼 Why It Works:

- Every number’s frequency can be counted in linear time.
- The condition `number == frequency` is straightforward to evaluate.
- The largest valid number is tracked easily using a variable.

---

### ⏱️ Time & Space Complexity:

- **Time Complexity:** O(n)  
  - One pass to count, one pass to check conditions.

- **Space Complexity:** O(n) (or O(1) if using fixed-size array for 1 ≤ arr[i] ≤ 500)

---
