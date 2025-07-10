## 💡 Concept Explanation

---

### 🔑 Goal:

Find the **longest word** such that all of its **prefixes** exist in the input array.

If multiple such words exist with same length, return the **lexicographically smallest** one.

---

### 🧠 Key Idea:

Use a **set** to store all strings for O(1) prefix lookup.

Then, for each word:
- Check if **all prefixes** `word[0:i]` (1 ≤ i < len(word)) exist in the set.
- If yes, compare with current result:
  - Take it if longer.
  - If same length, take **lexicographically smaller** one.

---

### 📐 Strategy:

1. **Insert all words in a set** for quick lookups.
2. For each word:
   - Iterate all prefixes.
   - If any prefix is missing, skip the word.
3. Keep track of the **best result** based on:
   - **Longest length**
   - If tie, **lexicographically smallest**

---

### ⏱ Time & Space Complexity:

- **Time Complexity:** O(n × m),  
  - n = number of words  
  - m = max length of a word (for prefix checks)
- **Space Complexity:** O(n × m)  
  - For storing words in the set

---
