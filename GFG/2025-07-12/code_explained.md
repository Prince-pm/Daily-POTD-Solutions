## 🔍 Code Explanation – Step by Step

This solution applies a bottom-up dynamic programming approach to compute the maximum gold a miner can collect, while only using in-place matrix modification to save space.

---

### 📦 Step 1: Traverse from Right to Left

- Begin from the **second-last column** and move backward to the first.
- For each cell `(i, j)` in that column, compute the best gold collection path forward.

---

### 🔄 Step 2: For Each Cell, Consider 3 Directions

- From the current cell `(i, j)`, consider moving to:
  - **Right** → `(i, j+1)`
  - **Right-up** → `(i-1, j+1)` if `i > 0`
  - **Right-down** → `(i+1, j+1)` if `i < n-1`
- Calculate the **maximum gold** from these options and **add it to the current cell**’s gold.

---

### 🧾 Step 3: Update Matrix In-Place

- The matrix is updated in-place, meaning `mat[i][j]` will eventually hold the **maximum gold collectible from that cell** onward.

---

### ✅ Step 4: Determine the Result

- After all updates, the **first column** holds the total maximum collectible gold from each row.
- Return the **maximum value in the first column** as the final answer.

---

### 📌 Notes:

- The traversal must be **right to left** because future values (from the right) are used to update current values.
- The in-place update saves extra space and still guarantees correct results since we never overwrite data before it's used.

---
