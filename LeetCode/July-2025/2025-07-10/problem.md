## 🎯 Problem: Reschedule Meetings for Maximum Free Time II

**Platform:** LeetCode  
**Difficulty:** Medium  
**Tags:** Greedy, Interval Scheduling, Sliding Window, Optimization, Prefix/Suffix Arrays

---

### 🧩 Problem Statement

You are given:
- An integer `eventTime` representing the duration of the event from `t = 0` to `t = eventTime`
- Two arrays `startTime[]` and `endTime[]` representing `n` **non-overlapping** and **sorted** meetings within the event

You may **reschedule at most one meeting**, keeping its **duration unchanged**, and placing it **anywhere** within the event such that:
- The meeting stays **non-overlapping**
- The **relative order can change**

Your task is to **maximize the longest free time segment** during the event after rescheduling.

---

### 🔒 Constraints

- 1 ≤ `eventTime` ≤ 10⁹  
- 2 ≤ `n` ≤ 10⁵  
- 0 ≤ `startTime[i]` < `endTime[i]` ≤ `eventTime`  
- Meetings are **non-overlapping** and **sorted**: `endTime[i] ≤ startTime[i+1]`

---