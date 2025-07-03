## 🎯 Problem: Find the K-th Character in String Game I

**Platform:** LeetCode  
**Difficulty:** Easy  
**Tags:** String, Simulation, Brute Force

---

### 🧩 Problem Statement

Alice and Bob are playing a game.

Initially, Alice has a string `word = "a"`.

Bob will repeatedly ask Alice to perform the following operation *forever*:

> Generate a new string by changing each character in `word` to its **next character in the English alphabet**, and append it to the original string.  
> (For example: `"a"` → `"ab"`, `"ab"` → `"abbc"`, `"abbc"` → `"abbcbccd"` and so on.)

The next character after `'z'` is `'a'` (wrap-around).

You are given a positive integer `k`.

Return the **k-th character** in the string `word` after performing the operation enough times such that the length of `word` is **at least `k`**.

---

### 🔒 Constraints

- 1 ≤ k ≤ 500

---