## 💡 Concept Explanation

---

### 🔑 Goal:

To find the **maximum amount of gold** that can be collected by moving from any cell in the **first column** to the **last column**, using only three allowed moves:
- Right
- Right-up diagonal
- Right-down diagonal

---

### 🧠 Key Idea:

This is a **Dynamic Programming** problem on a 2D matrix.

We build a solution **from the last column backward** toward the first, updating each cell with the **maximum gold that can be collected from that point onward**.

Each cell `(i, j)` is updated using the values from the **next column**:

mat[i][j] += max(
mat[i-1][j+1] if i > 0,
mat[i][j+1],
mat[i+1][j+1] if i < n - 1
)

---

### 🧭 Strategy:

1. Start from the **second-last column** and move leftward.
2. For each cell `(i, j)`, check all **three possible forward directions** and take the maximum.
3. Update the current cell to hold the **maximum gold collectible from that cell onward**.
4. After completing the update for all columns, the answer will be the **maximum value in the first column**.

---

### ⏱ Time & Space Complexity:

- **Time Complexity:** O(n × m) – We traverse each cell exactly once.
- **Space Complexity:** O(1) – We update the matrix in-place without needing extra space.

---
