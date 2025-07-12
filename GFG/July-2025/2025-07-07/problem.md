## 🎯 Problem: Next Greater Element in Circular Array

**Platform:** GeeksForGeeks  
**Difficulty:** Medium  
**Tags:** Stack, Arrays, Monotonic Stack

---

### 🧩 Problem Statement

You are given a **circular** integer array `arr[]`.  
For each element `arr[i]`, your task is to find the **Next Greater Element (NGE)** in circular order.  

The **Next Greater Element** of `arr[i]` is the **first** element that is **greater** than `arr[i]` when moving **clockwise** through the array.  
If no such element exists, return `-1` for that position.

---

### 🔄 Circular Property

After the last element of the array, the traversal continues from the first element again.  
That is, you may wrap around the array **once** to find the next greater element.

---

### 🔒 Constraints

- 1 ≤ `arr.length` ≤ 10⁵  
- 0 ≤ `arr[i]` ≤ 10⁶

---
