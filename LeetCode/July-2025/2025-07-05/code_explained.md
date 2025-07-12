## 🔍 Code Explanation – Step by Step

This problem is a simple **frequency-counting** problem using a hash map.

---

### 🔧 Step 1: Count Frequency of Elements

- Traverse the array `arr` once.
- For each number, count how many times it appears.
- Store this in a frequency map or array.

---

### 🔄 Step 2: Identify Lucky Integers

- A lucky integer is one where:
  - `frequency[x] == x`

- Iterate through all unique keys in the frequency map:
  - Check if the frequency of the number is equal to the number itself.
  - If it is, it is a lucky number.

---

### 🔼 Step 3: Track the Maximum

- Among all lucky numbers, maintain the **maximum lucky number** seen so far.
- Initialize result as `-1`.
- If a lucky number is found, update the result only if it's larger than the previous lucky number.

---

### 🧾 Step 4: Return the Result

- Return the maximum lucky number found.
- If none found, result will remain `-1`.

---

### 📌 Important Notes

- No need for sorting — just map + comparison.
- Since all values are within range [1, 500], a fixed-size array of 501 elements can also be used instead of a map.

---