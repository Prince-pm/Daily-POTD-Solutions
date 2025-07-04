## 🎯 Problem: Find the K-th Character in String Game II

**Platform:** LeetCode  
**Difficulty:** Hard  
**Tags:** Strings, Simulation, Recursion, Binary Construction

---

### 🧩 Problem Statement

Alice and Bob are playing a game. Initially, Alice has a string `word = "a"`.

You are given a positive integer `k` and an integer array `operations`, where `operations[i]` represents the type of the i-th operation:

- If `operations[i] == 0`: **Append a copy of `word` to itself.**  
- If `operations[i] == 1`: **Append a version of `word` where every character is replaced with its next character** in the English alphabet (wrapping from `'z'` to `'a'`).

Return the **k-th character** (1-indexed) of `word` after performing all operations in sequence.

⚠️ It is **guaranteed** that after all operations, the final string will have at least `k` characters.

---

### 🔒 Constraints

- 1 ≤ `k` ≤ 10¹⁴  
- 1 ≤ `operations.length` ≤ 100  
- Each `operations[i]` is either 0 or 1  
- The final string is guaranteed to have at least `k` characters.

---