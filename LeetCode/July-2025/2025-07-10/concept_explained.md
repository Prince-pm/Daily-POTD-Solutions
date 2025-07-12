## 💡 Concept Explanation

---

### 🔑 Goal:

Maximize the longest continuous **free time interval** during an event by **rescheduling at most one meeting** while maintaining:
- Same **duration**
- **No overlap**
- **Within event bounds**

---

### 🧠 Key Ideas:

1. **Free time (gaps)** exists between meetings:
   - Before the first meeting
   - Between consecutive meetings
   - After the last meeting

2. **If we reschedule a meeting**, we:
   - **Free its original slot** (increases the gap between previous and next meeting)
   - **Place it into a gap** that is **large enough** to accommodate it

3. Use a **prefix and suffix maximum** to efficiently get the best gap available **excluding** neighboring gaps (to avoid overlapping)

---

### 📐 Strategy:

- Calculate all idle times (n+1 gaps) between meetings
- Compute two arrays:
  - `leftMax[i]`: max idle gap from the **start** up to index `i`
  - `rightMax[i]`: max idle gap from the **end** down to index `i`
- Try rescheduling each meeting:
  - Remove its original gap (merge adjacent idle times)
  - Attempt placing it into the **largest valid gap** elsewhere
  - Calculate potential new longest free interval
- Track and return the **maximum**

---

### ⏱ Time Complexity:

- **Time:** O(n) – one pass to build idle gaps, two passes for prefix/suffix max, one pass to try rescheduling  
- **Space:** O(n) – for idleSlots, leftMax, rightMax arrays

---
