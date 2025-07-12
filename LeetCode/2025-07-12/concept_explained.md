## 💡 Concept Explanation

---

### 🔑 Goal:

Determine the **earliest and latest** rounds in which two unbeatable players can **face each other** in a structured knockout tournament.

---

### 🧠 Key Idea:

The players face off in mirrored pairings: `i` from the start vs. `i` from the end. After each round, winners regroup in ascending original order.

Because `firstPlayer` and `secondPlayer` only lose to each other:
- You can choose outcomes of other matches to either **speed up** or **delay** their confrontation.
- You must **simulate** all valid pairings in each round to explore all possible scenarios.

---

### 🧭 Strategy:

1. **Normalize positions**: Convert to `l` (position from front) and `r` (from back).
2. **Recursive DFS + Memoization**:  
   - Recursively simulate rounds, keeping track of the number of players and the positions of `firstPlayer` and `secondPlayer`.
   - Store results for already visited states to prevent recomputation.
3. **Enumerate all valid match outcomes**:  
   - Simulate who advances from each possible position and how the key players' relative positions change in the next round.
4. **Track round bounds**:
   - For every valid simulation path, update the minimum (earliest) and maximum (latest) round they can meet.

---

### ⏱ Time & Space Complexity:

- **Time Complexity:** Exponential in worst case, but practical due to `n ≤ 28` and memoization.
- **Space Complexity:** O(n³) for memo table.

---
