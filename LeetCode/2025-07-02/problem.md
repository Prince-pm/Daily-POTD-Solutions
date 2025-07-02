## 🎯 Problem: Find the Original Typed String II

**Platform:** LeetCode  
**Difficulty:** Hard 
**Tags:** String, Grouping, Combinatorics, Dynamic Programming

---

### 🧩 Problem Statement

Alice is attempting to type a specific string on her computer.  
However, she may **press a key for too long**, causing a character to be repeated **multiple times**.

You're given a string `word`, representing the **final output** shown on her screen.  
You're also given a positive integer `k`, representing the **minimum allowed length** of the original string she intended to type.

Return the **total number of possible original strings** that Alice might have meant to type, assuming she was trying to type a string of **length at least `k`**.

Since the answer can be very large, return it **modulo 10⁹ + 7**.

---

### 🔒 Constraints

- 1 ≤ word.length ≤ 5 × 10⁵  
- word consists only of lowercase English letters  
- 1 ≤ k ≤ 2000

---