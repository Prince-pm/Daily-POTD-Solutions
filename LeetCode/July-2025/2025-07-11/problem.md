## 🎯 Problem: Meeting Rooms III

**Platform:** Leetcode  
**Difficulty:** Medium  
**Tags:** Heap, Greedy, Sorting, Simulation

---

### 🧩 Problem Statement

You are given an integer `n`. There are `n` rooms numbered from `0` to `n - 1`.

You are given a 2D integer array `meetings` where `meetings[i] = [starti, endi]` means that a meeting will be held during the half-closed time interval `[starti, endi)`.

Each meeting will take place in the unused room with the lowest number. If there are no available rooms, the meeting will be delayed until a room becomes free. The delayed meeting should have the same duration as the original meeting.

When a room becomes unused, meetings that have an earlier original start time should be given the room.

Return the number of the room that held the most meetings. If there are multiple rooms, return the room with the lowest number.

---

### 🔒 Constraints

- `1 ≤ n ≤ 100`
- `1 ≤ meetings.length ≤ 10^5`
- `meetings[i].length == 2`
- `0 ≤ starti < endi ≤ 5 * 10^5`
- All values of `starti` are unique.

---