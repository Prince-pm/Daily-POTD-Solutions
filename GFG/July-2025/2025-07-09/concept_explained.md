## 💡 Concept Explanation

---

### 🔑 Goal:

Compute the **sum of minimums of all subarrays** in O(n) time.

---

### 🧠 Key Idea:

Every element `arr[i]` is the **minimum** in some number of subarrays.  
We calculate its **contribution** using:
- Number of subarrays where it's the **minimum**
- Multiply this count by `arr[i]`

---

### 📐 Strategy:

1. **Monotonic Stack**:
   - Used to compute Previous Less Element (PLE) and Next Less Element (NLE)
   - Helps in determining how many subarrays `arr[i]` is the minimum of.

2. **PLE[i]:**
   - The nearest index to the **left** of `i` where `arr[ple[i]] < arr[i]`
   - If none found, PLE = -1

3. **NLE[i]:**
   - The nearest index to the **right** of `i` where `arr[nle[i]] < arr[i]`
   - If none found, NLE = n

4. **Contribution Formula:**
   - Subarrays count = `(i - PLE[i]) * (NLE[i] - i)`
   - Total = `sum(arr[i] * count)`

---

### ⏱ Time & Space Complexity

- **Time:** O(n)  
  - One pass for PLE, one for NLE, one to calculate total.
- **Space:** O(n) for stack, PLE, and NLE

---
