## 🎯 Problem: Maximum Number of Events That Can Be Attended II

**Platform:** LeetCode  
**Difficulty:** Hard  
**Tags:** Dynamic Programming, Binary Search, Sorting, DP with Memoization

---

### 🧩 Problem Statement

You are given a list of events where each event is represented by `[startDay, endDay, value]`.  
You can attend at most `k` **non-overlapping** events (no overlap on start and end days).  
If you attend an event, you earn `value`.

Return the **maximum total value** you can achieve by attending at most `k` events.

---

### 🔒 Constraints

- 1 ≤ `k` ≤ `events.length`  
- 1 ≤ `k * events.length` ≤ 10⁶  
- 1 ≤ `startDay`, `endDay` ≤ 10⁹  
- 1 ≤ `value` ≤ 10⁶

---