## 💡 Concept Explanation

---

### 🔑 Goal:
Determine the total number of **valid original strings** Alice could have typed, considering:
- She may have **pressed keys for too long** on multiple occasions.
- We need to count all possible ways she **might have typed fewer characters** in those cases.
- The final original string must be of **length at least `k`**.

---

### 🧠 Key Idea:
The string we have is the **final output**, potentially containing **repeated characters** caused by clumsy long presses.

We want to reverse this process by trying **all combinations** of choosing **1 to group_length** characters from each run of identical letters.

---

### 📐 Strategy:

1. **Group consecutive identical characters** in the string:
   - For example: `"aaabbcc"` → groups: `[3, 2, 2]` for 'a', 'b', 'c'

2. **Use dynamic programming** to count:
   - For each group, we can pick **any number of characters from 1 to its length**.
   - For each way of forming `x` characters from the current group, combine it with existing ways to form longer original strings.

3. **Track combinations**:
   - We use a DP array `dp[i]` where `dp[i]` stores the number of ways to build an original string of length `i`.

4. **Sum all valid lengths**:
   - After processing all groups, sum up `dp[i]` for all `i ≥ k`.

---

### 💼 Why It Works:
- Every group can contribute **multiple possible original interpretations**.
- Dynamic programming helps us efficiently count how many **length combinations** are possible.
- By only summing combinations with length ≥ `k`, we satisfy the constraint.

---

### ⏱️ Time & Space Complexity:

- **Time Complexity:** O(n × k)  
  - `n`: number of character groups  
  - `k`: minimum required string length (due to DP array updates)

- **Space Complexity:** O(k)  
  - A single 1D DP array of size `k+1` is maintained for tracking valid string lengths.

---