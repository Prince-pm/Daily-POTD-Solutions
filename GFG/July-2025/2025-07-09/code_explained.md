## 🔍 Code Explanation – Step by Step

This solution uses **monotonic stacks** to calculate how many subarrays each element is the minimum of.

---

### 🧮 Step 1: Previous Less Element (PLE)

- Traverse from left to right
- For each `i`, use stack to find the nearest element to the **left** smaller than `arr[i]`
- Store index in `ple[i]`

---

### 🔁 Step 2: Next Less Element (NLE)

- Traverse from right to left
- For each `i`, find the nearest element to the **right** smaller or equal to `arr[i]`
- Store index in `nle[i]`

---

### ➗ Step 3: Contribution Calculation

- For each `arr[i]`, calculate:
  - `left = i - ple[i]`
  - `right = nle[i] - i`
- Total subarrays where `arr[i]` is minimum = `left * right`
- Contribution to result = `arr[i] * left * right`

---

### 🧾 Step 4: Return Final Sum

- Accumulate all contributions and return modulo 10⁹ + 7

---

### 📌 Notes

- Monotonic stack avoids brute-force comparison of all subarrays
- This problem is a classic **"sum of minimum of all subarrays"** with O(n) technique

---
