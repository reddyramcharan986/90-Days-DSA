# Problem 02 — Search in Rotated Sorted Array

**Platform:** LeetCode  
**Problem:** #33  
**Topic:** Arrays / Binary Search  
**Language:** C

## 🧠 Approach

1. Calculate the middle index.
2. If the target is found, return its index.
3. Identify the sorted half.
4. Check whether the target lies in that half.
5. Eliminate the other half and repeat.
6. Return `-1` if the target is absent.

## 💡 Example

**Input:**
```text
nums = [4, 5, 6, 7, 0, 1, 2]
target = 0
```

**Output:**
```text
4
```

## ⏱️ Complexity

- **Time Complexity:** O(log n)
- **Space Complexity:** O(1)

## 🔗 Problem

[LeetCode #33 — Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/)
