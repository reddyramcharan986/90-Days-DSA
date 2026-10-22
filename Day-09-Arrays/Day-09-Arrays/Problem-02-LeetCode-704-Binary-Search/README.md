# Problem 02 — Binary Search

**Platform:** LeetCode  
**Problem:** #704 — Binary Search  
**Topic:** Arrays / Searching  
**Language:** C

## 🧠 Approach

1. Set `low` to the first index and `high` to the last index.
2. Calculate the middle index.
3. If the middle element equals the target, return its index.
4. If the middle element is smaller, search the right half.
5. Otherwise, search the left half.
6. Return `-1` if the target is not found.

## 💡 Example

**Input:**
```text
nums = [-1, 0, 3, 5, 9, 12]
target = 9
```

**Output:**
```text
4
```

## ⏱️ Complexity

- **Time Complexity:** O(log n)
- **Space Complexity:** O(1)

## 🔗 Problem

[LeetCode #704 — Binary Search](https://leetcode.com/problems/binary-search/)
