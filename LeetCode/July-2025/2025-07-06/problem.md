## 🎯 Problem: Finding Pairs With a Certain Sum

**Platform:** LeetCode  
**Difficulty:** Medium  
**Tags:** Hashing, Design, Data Structure, Two Pointers

---

### 🧩 Problem Statement

You are given two integer arrays `nums1` and `nums2`.  

Design a data structure `FindSumPairs` that supports the following operations:

1. `FindSumPairs(nums1, nums2)`  
   Initializes the object with the given arrays.

2. `void add(index, val)`  
   Adds `val` to `nums2[index]`.

3. `int count(tot)`  
   Returns the number of pairs `(i, j)` such that `nums1[i] + nums2[j] == tot`.

---

### 🔒 Constraints

- 1 ≤ nums1.length ≤ 1000  
- 1 ≤ nums2.length ≤ 10⁵  
- 1 ≤ nums1[i], nums2[i], val ≤ 10⁵  
- 0 ≤ index < nums2.length  
- 1 ≤ tot ≤ 10⁹  
- At most 1000 calls are made to `add` and `count` each  

---