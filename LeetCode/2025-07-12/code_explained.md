## 🔍 Code Explanation – Step by Step

This approach uses recursive DFS with memoization to track all possible match configurations and outcomes that can determine the earliest and latest round when two unbeatable players face off.

---

### 📦 Step 1: Normalize and Prepare Memo Table

- Normalize `firstPlayer` and `secondPlayer` into their mirrored positions: 
  - Left position from front, right position from back.
- Initialize a 3D memo table to cache intermediate results and avoid redundant recomputation.

---

### 🔁 Step 2: Recursive Simulation (`solve` Function)

- Base Case: If `l == r`, the two players face each other in this round — return `{1, 1}`.
- Swap `l` and `r` if `l > r` to standardize state tracking.
- If this state is already computed, return the memoized value.

---

### 🔍 Step 3: Enumerate Valid Match Combinations

- Use nested loops to simulate all possible positions `i` and `j` for `firstPlayer` and `secondPlayer` in the next round.
- Carefully ensure the pair `(i, j)` fits in the valid half-pair count of the next round.
- For each valid transition, recursively compute earliest and latest rounds from the resulting smaller state.

---

### 🧮 Step 4: Update and Return Result

- Update the minimum (`a`) and maximum (`b`) rounds by exploring all valid transitions recursively.
- Store the computed result in the memo table before returning.

---

### 📌 Notes:

- The reordering of winners after each round is handled implicitly by simulating player advancement based on relative positions.
- This approach smartly leverages symmetry and pruning using memoization to avoid exponential blow-up.
- Works well for small `n` due to bounded tournament depth.

---
