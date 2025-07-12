## 💡 Concept Explanation

We want to **maximize the minimum height** after watering.

This is a classic **Binary Search on Answer** problem:
- Instead of finding the min height directly, we **binary search for the max possible minimum height**.
- At each mid-value, we **simulate whether it’s possible** to achieve that minimum height within `k` days.

### 🔧 Techniques Used:
1. **Binary Search on height:**  
   Range = [min(arr), min(arr) + k] → Because we can't increase any element by more than k.

2. **Greedy Watering Simulation:**  
   We use a **difference array (`water[]`)** to simulate range updates efficiently.  
   - This ensures we apply water only where needed.
   - This avoids TLE with O(n) complexity per mid-check.

3. **Prefix Sum (`curr`)** during simulation:
   - To track total water effect at each flower.

4. **Feasibility Check (`canAchieve(h)`):**  
   - If total water needed > k → return False.

---

### ⏱️ Time Complexity:
- Binary Search range: O(log k)
- Each check (canAchieve): O(n)

**Total:** O(n * log k)

---

### ✅ Why This Approach Works:
- Efficient watering using a difference array (like range update tricks).
- Binary search ensures we only test feasible minimum values.