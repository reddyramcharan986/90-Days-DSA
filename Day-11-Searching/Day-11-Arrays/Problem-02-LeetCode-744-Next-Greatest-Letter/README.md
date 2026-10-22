# Problem 02 — Find Smallest Letter Greater Than Target

**Platform:** LeetCode  
**Problem:** #744  
**Topic:** Arrays / Binary Search  
**Language:** C

## 🧠 Approach

1. Initialize `low` and `high` to the array boundaries.
2. Calculate the middle index.
3. If the middle letter is greater than the target, search the left half.
4. Otherwise, search the right half.
5. Return the letter at `low`. Use modulo to wrap around to the first letter when necessary.

## 💡 Example

**Input:**
```text
letters = ['c', 'f', 'j']
target = 'f'
```

**Output:**
```text
'j'
```

## ⏱️ Complexity

- **Time Complexity:** O(log n)
- **Space Complexity:** O(1)

## 🔗 Problem

[LeetCode #744 — Find Smallest Letter Greater Than Target](https://leetcode.com/problems/find-smallest-letter-greater-than-target/)
