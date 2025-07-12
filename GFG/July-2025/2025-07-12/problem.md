## 🎯 Problem: Gold Mine Problem

**Platform:** GeeksForGeeks  
**Difficulty:** Medium  
**Tags:** Dynamic Programming, 2D Grid, Matrix Traversal

---

### 🧩 Problem Statement

You are given a 2D matrix `mat[][]` representing a gold mine. Each cell contains a positive integer which is the amount of gold in tons.

The miner can start from **any row in the first column**, and can move in any of the following directions **from a given cell**:

- Move to the **right** cell → `(i, j + 1)`
- Move to the **right-up** diagonal → `(i - 1, j + 1)`
- Move to the **right-down** diagonal → `(i + 1, j + 1)`

The miner keeps collecting gold as he moves until he can no longer move.

Your task is to determine the **maximum amount of gold** that the miner can collect.

---

### 🔒 Constraints

- `1 ≤ mat.length, mat[0].length ≤ 500`
- `0 ≤ mat[i][j] ≤ 100`

---