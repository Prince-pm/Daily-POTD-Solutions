## 🎯 Problem: The Earliest and Latest Rounds Where Players Compete

**Platform:** LeetCode  
**Difficulty:** Hard  
**Tags:** Simulation, DFS, Bitmasking, Dynamic Programming

---

### 🧩 Problem Statement

There is a tournament where `n` players stand in a single row, numbered from `1` to `n`. Players compete in successive rounds as follows:

- In each round, the `i-th` player from the front competes against the `i-th` player from the end.
- If the number of players is odd, the middle player automatically advances.
- Winners are reordered in increasing order based on their original numbers before the next round starts.

Two special players, `firstPlayer` and `secondPlayer`, are guaranteed to beat anyone else — they only lose when facing each other.

Return a list of two integers:
- The earliest possible round when `firstPlayer` and `secondPlayer` can meet.
- The latest possible round when they can meet.

---

### 🔒 Constraints

- `2 ≤ n ≤ 28`  
- `1 ≤ firstPlayer < secondPlayer ≤ n`

---
