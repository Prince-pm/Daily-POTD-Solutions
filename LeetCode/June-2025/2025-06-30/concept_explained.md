## 💡 Concept Explanation

### 🔑 Goal:
Find the **length of the longest subsequence** such that:
- max - min = 1

We don't care about order, only the elements that can be picked while maintaining that 1-difference condition.

---

### 🧠 Key Idea:
We can use a **hash map** to store the **frequency of each number**.

Then, for each key in the map:
- If `key + 1` exists → it's a harmonious pair
- Total length = freq[key] + freq[key + 1]

Track the **maximum** length among all such pairs.

---

### 💼 Why It Works:
- Using frequency avoids generating all subsequences (which is exponential)
- Hash map gives O(1) lookups
- It efficiently checks for harmonious pairs

---

### ⏱️ Time & Space Complexity:
- Time: O(n) → Single pass to count + one pass to check neighbors
- Space: O(n) → For storing frequency map