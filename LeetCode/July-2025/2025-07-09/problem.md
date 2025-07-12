## 🎯 Problem: Reschedule Meetings for Maximum Free Time I

**Platform:** LeetCode  
**Difficulty:** Medium  
**Tags:** Greedy, Sliding Window, Scheduling, Arrays

---

### 🧩 Problem Statement

You're given:
- `eventTime`: total time of the event (`[0, eventTime]`)
- Two arrays `startTime[]` and `endTime[]` of size `n`, where each `i-th` meeting is from `startTime[i]` to `endTime[i]` and is **non-overlapping**.

You are allowed to **reschedule up to `k` meetings** by moving their start times while keeping their **durations and relative order** unchanged.

**Goal:** Maximize the **longest continuous period of free time** during the event.

---

### 🔒 Constraints

- 1 ≤ `eventTime` ≤ 10⁹  
- 2 ≤ `n` ≤ 10⁵  
- 1 ≤ `k` ≤ `n`  
- `0 ≤ startTime[i] < endTime[i] ≤ eventTime`  
- Meetings are **non-overlapping and sorted**: `endTime[i] ≤ startTime[i + 1]`

---